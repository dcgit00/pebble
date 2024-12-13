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

#include "drivers/imu/bmi160/bmi160.h"
#include "drivers/imu/mag3110/mag3110.h"

#include "system/logging.h"

#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>


void imu_init(void) {
  bmi160_init();
  bmi160_set_accel_power_mode(BMI160_Accel_Mode_Normal);

  mag3110_init();
}

void imu_power_up(void) {
  // Unused in snowy as PMIC turns on everything
}

void imu_power_down(void) {
  // Unused in snowy as PMIC turns off everything
}
