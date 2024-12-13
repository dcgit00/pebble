# Copyright 2024 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

from waflib import Task, TaskGen

import json


class generate_timeline_table(Task.Task):
    def run(self):
        with open(self.outputs[0].abspath(), 'w') as f:
            f.write("""
//
// AUTOGENERATED
// DO NOT MODIFY
//

#include "resource/resource_ids.auto.h"
#include "services/normal/timeline/timeline_resources.h"

#include <stdint.h>

const uint16_t g_timeline_resources[][TimelineResourceSizeCount] = {
""")

            for res in self.timeline_dict:
                f.write("   [{}] = {{ {}, {}, {} }},\n"
                        .format(res["id"],
                                res["sizes"].get('tiny', 'RESOURCE_ID_INVALID'),
                                res["sizes"].get('small', 'RESOURCE_ID_INVALID'),
                                res["sizes"].get('large', 'RESOURCE_ID_INVALID')))

            f.write("};\n")


class generate_timeline_ids(Task.Task):
    def run(self):
        with open(self.outputs[0].abspath(), 'w') as f:
            f.write("""
#pragma once

//
// AUTOGENERATED
// DO NOT MODIFY
//

typedef enum {
  TIMELINE_RESOURCE_INVALID = 0,
""")

            SYSTEM_RESOURCE_FLAG = 0x80000000
            max_timeline_id = 0
            for res in self.timeline_dict:
                max_timeline_id = max(max_timeline_id, res["id"])
                id = res["id"] | SYSTEM_RESOURCE_FLAG
                f.write("  TIMELINE_RESOURCE_{} = {:#x},\n".format(res["name"], id))

            f.write("} TimelineResourceId;\n\n")
            f.write("#define NUM_TIMELINE_RESOURCES {}\n".format(max_timeline_id + 1))


@TaskGen.feature('generate_timeline')
@TaskGen.before_method('process_source', 'process_rule')
def process_generate_timeline(self):
    # map the resources into URIs and invert the key/val
    timeline_uris = {"system://images/" + r["name"]: r["id"] for r in self.timeline_dict
                     if not r.get("internal", False)}
    self.RESOURCE_URIS = json.dumps(timeline_uris, indent=4)

    # substitute it into the json template
    layouts_in = self.bld.path.find_node('resources/normal/base/layouts/layouts.json.in')
    task = self.create_task('subst',
                            [layouts_in] + self.resource_definition_files,
                            self.layouts_node)

    task = self.create_task('generate_timeline_table',
                            self.resource_definition_files,
                            self.timeline_table_node)
    task.timeline_dict = self.timeline_dict

    task = self.create_task('generate_timeline_ids',
                            self.resource_definition_files,
                            self.timeline_ids_node)
    task.timeline_dict = self.timeline_dict
