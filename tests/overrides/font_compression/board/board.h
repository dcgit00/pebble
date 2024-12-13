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

#include <stdint.h>

#define PLATFORM_TINTIN 1

typedef enum {
  CC2564A = 0,
  CC2564B,
} BluetoothController;

typedef struct {
  const uint8_t backlight_on_percent; // percent of max possible brightness
} BoardConfig;

typedef struct {
  const BluetoothController controller;
} BoardConfigBTCommon;

typedef struct {
  const uint8_t low_power_threshold;
} BoardConfigPower;

static const BoardConfig BOARD_CONFIG = {
  .backlight_on_percent = 100,
};

static const BoardConfigBTCommon BOARD_CONFIG_BT_COMMON = {
  .controller = CC2564A,
};

static const BoardConfigPower BOARD_CONFIG_POWER = {
  .low_power_threshold = 5
};
