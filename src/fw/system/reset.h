/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "util/attributes.h"

#include <stdbool.h>

//! Shut down system services but don't actually reset.
void system_reset_prepare(bool unsafe_reset);

//! Reset nicely after shutting down system services. Does not set the reboot_reason other than
//! calling reboot_reason_set_restarted_safely just before the reset occurs.
NORETURN system_reset(void);

//! Same as system_reset() but usable as a callback.
void system_reset_callback(void *);

//! The final stage in the reset process.
NORETURN system_hard_reset(void);
