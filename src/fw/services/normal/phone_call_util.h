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

typedef struct PebblePhoneCaller {
  char *number;
  char *name;
} PebblePhoneCaller;

//! Creates a new caller to pass as part of a phone event
//! @param number The phone number for this caller
//! @param name The name of the caller
//! @return Pointer to new caller
PebblePhoneCaller* phone_call_util_create_caller(const char *number, const char *name);

//! Destroys a caller previously created with \ref phone_call_util_create_caller
//! @param caller The caller to free
void phone_call_util_destroy_caller(PebblePhoneCaller *caller);
