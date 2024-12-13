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

from waflib import Node, Task, TaskGen

from resources.types.resource_ball import ResourceBall

from pbpack import ResourcePack


class generate_version_header(Task.Task):
    def run(self):
        if len(self.inputs):
            # is_system=True because only firmwares use version headers
            with open(self.inputs[0].abspath(), 'rb') as f:
                pbpack = ResourcePack.deserialize(f, is_system=True)
            resource_crc = pbpack.get_content_crc()
        else:
            resource_crc = 0

        self.outputs[0].parent.mkdir()  # Make sure the output directory exists
        with open(self.outputs[0].abspath(), 'w') as output_file:
            output_file.write("""
#pragma once

//
// AUTOGENERATED
// DO NOT MODIFY
//

static const ResourceVersion SYSTEM_RESOURCE_VERSION = {{
  .crc = {},
  .timestamp = 0
}};
""".format(resource_crc))


@TaskGen.feature('generate_version_header')
@TaskGen.before_method('process_source', 'process_rule')
def process_generate_version_header(self):
    task = self.create_task('generate_version_header',
                            self.pbpack,
                            self.version_header_target)
