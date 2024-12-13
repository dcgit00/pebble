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

#include <stdbool.h>
#include <stdint.h>

#include "board/board.h"

struct TemperatureSensor {
  const VoltageMonitorDevice *voltage_monitor;
  int32_t millivolts_ref;
  int32_t millidegrees_ref;
  int32_t slope_numerator;
  int32_t slope_denominator;
};

void temperature_init(void);

// Get the temperature in millidegrees-C
// WARNING: the temperature sensor may not be calibrated and thus this reading
// should not be relied on to get a true representation of absolute temperature
int32_t temperature_read(void);
