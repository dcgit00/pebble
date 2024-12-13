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


// ----------------------------------------------------------------
// Sample captured at: 2015-11-09 14:23:00 local, 2015-11-09 22:23:00 GMT
AlgDlsMinuteData *activity_sample_2015_11_09_14_23_00(int *len) {
  // The unit tests parse the //> TEST_.* lines below for test values
  //> TEST_NAME pbl_29016
  //> TEST_VERSION 3
  //> TEST_TOTAL -1
  //> TEST_TOTAL_MIN -1
  //> TEST_TOTAL_MAX -1
  //> TEST_DEEP -1
  //> TEST_DEEP_MIN -1
  //> TEST_DEEP_MAX -1
  //> TEST_START_AT 487
  //> TEST_START_AT_MIN 480
  //> TEST_START_AT_MAX 500
  //> TEST_END_AT -1
  //> TEST_END_AT_MIN -1
  //> TEST_END_AT_MAX -1
  //> TEST_CUR_STATE_ELAPSED -1
  //> TEST_CUR_STATE_ELAPSED_MIN -1
  //> TEST_CUR_STATE_ELAPSED_MAX -1
  //> TEST_IN_SLEEP 0
  //> TEST_IN_SLEEP_MIN 0
  //> TEST_IN_SLEEP_MAX 0
  //> TEST_IN_DEEP_SLEEP 0
  //> TEST_IN_DEEP_SLEEP_MIN 0
  //> TEST_IN_DEEP_SLEEP_MAX 0
  //> TEST_WEIGHT 1.0

  // list of: {steps, orientation, vmc, light, plugged_in}
  static AlgDlsMinuteData samples[] = {
    { 0, 0x7b, 680, 197, 0},
    { 0, 0x66, 1467, 202, 0},
    { 0, 0x66, 946, 196, 0},
    { 0, 0x63, 1817, 181, 0},
    { 0, 0x42, 414, 183, 0},
    { 0, 0x42, 619, 183, 0},
    { 0, 0x42, 173, 182, 0},
    { 0, 0x42, 1432, 182, 0},
    { 0, 0x42, 0, 196, 0},
    { 0, 0x42, 1098, 184, 0},
    { 0, 0x41, 612, 161, 0},
    { 22, 0x40, 1424, 180, 0},
    { 60, 0x51, 2715, 175, 0},
    { 0, 0x62, 1121, 172, 0},
    { 0, 0x64, 384, 185, 0},
    // 15: Local time: 02:38:00 PM
    { 0, 0x75, 682, 174, 0},
    { 0, 0x66, 2064, 174, 0},
    { 0, 0x73, 1452, 174, 0},
    { 0, 0x74, 439, 173, 0},
    { 0, 0x74, 348, 166, 0},
    { 0, 0x86, 29, 164, 0},
    { 0, 0x74, 715, 162, 0},
    { 0, 0x64, 55, 161, 0},
    { 0, 0x64, 178, 162, 0},
    { 0, 0x74, 241, 155, 0},
    { 0, 0x74, 183, 160, 0},
    { 0, 0x65, 841, 161, 0},
    { 0, 0x74, 216, 162, 0},
    { 0, 0x64, 1123, 162, 0},
    { 0, 0x64, 146, 162, 0},
    // 30: Local time: 02:53:00 PM
    { 0, 0x74, 374, 149, 0},
    { 0, 0x74, 192, 151, 0},
    { 0, 0x74, 166, 161, 0},
    { 0, 0x64, 801, 163, 0},
    { 0, 0x64, 351, 161, 0},
    { 0, 0x74, 12, 161, 0},
    { 0, 0x67, 836, 159, 0},
    { 0, 0x54, 234, 162, 0},
    { 0, 0x54, 430, 162, 0},
    { 0, 0x84, 211, 164, 0},
    { 0, 0x74, 1215, 164, 0},
    { 0, 0x74, 195, 160, 0},
    { 0, 0x73, 850, 163, 0},
    { 0, 0x74, 127, 170, 0},
    { 0, 0x61, 3450, 155, 0},
    // 45: Local time: 03:08:00 PM
    { 0, 0x66, 2262, 174, 0},
    { 0, 0x73, 2521, 174, 0},
    { 0, 0x40, 1567, 153, 0},
    { 0, 0x30, 19, 154, 0},
    { 0, 0x40, 327, 152, 0},
    { 0, 0x50, 472, 165, 0},
    { 0, 0x51, 3032, 172, 0},
    { 0, 0x65, 1055, 172, 0},
    { 0, 0x46, 1814, 162, 0},
    { 0, 0x74, 698, 170, 0},
    { 0, 0x74, 1774, 172, 0},
    { 0, 0x53, 650, 178, 0},
    { 0, 0x63, 2288, 201, 0},
    { 0, 0x83, 367, 195, 0},
    { 0, 0x74, 502, 188, 0},
    // 60: Local time: 03:23:00 PM
    { 17, 0x63, 3140, 162, 0},
    { 0, 0x64, 780, 164, 0},
    { 0, 0x44, 29, 164, 0},
    { 0, 0x44, 1555, 164, 0},
    { 0, 0x64, 1436, 166, 0},
    { 10, 0x75, 1499, 167, 0},
    { 0, 0x63, 3590, 196, 0},
    { 0, 0x75, 279, 199, 0},
    { 0, 0x74, 1502, 203, 0},
    { 0, 0x64, 1816, 182, 0},
    { 0, 0x62, 1205, 169, 0},
    { 0, 0x51, 0, 164, 0},
    { 0, 0x51, 477, 181, 0},
    { 0, 0x71, 1348, 177, 0},
    { 0, 0x74, 1732, 177, 0},
    // 75: Local time: 03:38:00 PM
    { 0, 0x61, 470, 185, 0},
    { 0, 0x62, 824, 173, 0},
    { 0, 0x75, 0, 174, 0},
    { 0, 0x75, 57, 175, 0},
    { 0, 0x74, 330, 202, 0},
    { 0, 0x63, 2167, 174, 0},
    { 0, 0x64, 2449, 199, 0},
    { 0, 0x73, 1222, 181, 0},
    { 0, 0x73, 2221, 157, 0},
    { 0, 0x74, 598, 159, 0},
    { 0, 0x53, 3871, 163, 0},
    { 0, 0x54, 3973, 142, 0},
    { 0, 0x42, 4206, 158, 0},
    { 20, 0x52, 3754, 150, 0},
    { 38, 0x52, 9622, 145, 0},
    // 90: Local time: 03:53:00 PM
    { 112, 0x41, 7070, 145, 0},
    { 99, 0x43, 5121, 146, 0},
    { 49, 0x53, 3364, 144, 0},
    { 89, 0x42, 4855, 140, 0},
    { 120, 0x53, 6889, 144, 0},
    { 110, 0x42, 5357, 144, 0},
    { 110, 0x43, 6142, 145, 0},
    { 116, 0x53, 5220, 144, 0},
    { 113, 0x42, 4958, 142, 0},
    { 74, 0x42, 1996, 144, 0},
    { 0, 0x42, 591, 144, 0},
    { 0, 0x42, 110, 131, 0},
    { 0, 0x42, 349, 144, 0},
    { 24, 0x43, 2319, 147, 0},
    { 0, 0x43, 1347, 146, 0},
    // 105: Local time: 04:08:00 PM
    { 0, 0x33, 80, 145, 0},
    { 0, 0x33, 22, 145, 0},
    { 0, 0x43, 801, 147, 0},
    { 0, 0x46, 430, 157, 0},
    { 0, 0x57, 405, 153, 0},
    { 0, 0x64, 435, 146, 0},
    { 0, 0x34, 174, 151, 0},
    { 0, 0x33, 514, 148, 0},
    { 0, 0x33, 22, 142, 0},
    { 0, 0x33, 1, 145, 0},
    { 0, 0x33, 0, 147, 0},
    { 0, 0x33, 0, 135, 0},
    { 0, 0x33, 621, 146, 0},
    { 0, 0x33, 276, 146, 0},
    { 0, 0x43, 222, 146, 0},
    // 120: Local time: 04:23:00 PM
    { 0, 0x43, 0, 146, 0},
    { 0, 0x43, 52, 145, 0},
    { 0, 0x43, 50, 145, 0},
    { 0, 0x43, 150, 142, 0},
    { 0, 0x43, 736, 145, 0},
    { 0, 0x43, 54, 145, 0},
    { 0, 0x43, 719, 147, 0},
    { 0, 0x54, 1471, 155, 0},
    { 0, 0x53, 572, 149, 0},
    { 0, 0x43, 47, 152, 0},
    { 12, 0x54, 1621, 157, 0},
    { 4, 0x54, 2445, 143, 0},
    { 0, 0x55, 720, 145, 0},
    { 0, 0x53, 1898, 147, 0},
    { 0, 0x73, 376, 145, 0},
    // 135: Local time: 04:38:00 PM
    { 0, 0x73, 1735, 148, 0},
    { 0, 0x73, 118, 148, 0},
    { 0, 0x73, 439, 148, 0},
    { 18, 0x63, 6305, 142, 0},
    { 109, 0x43, 5593, 146, 0},
    { 83, 0x43, 7250, 148, 0},
    { 75, 0x42, 5129, 146, 0},
    { 0, 0x72, 2346, 146, 0},
    { 0, 0x45, 192, 142, 0},
    { 0, 0x44, 71, 146, 0},
    { 0, 0x44, 908, 146, 0},
    { 0, 0x54, 4408, 132, 0},
    { 0, 0x54, 3884, 146, 0},
    { 0, 0x63, 68, 147, 0},
    { 0, 0x63, 204, 146, 0},
    // 150: Local time: 04:53:00 PM
    { 0, 0x54, 1656, 146, 0},
    { 0, 0x65, 1735, 146, 0},
    { 0, 0x72, 2267, 146, 0},
    { 74, 0x43, 7859, 142, 0},
    { 105, 0x42, 4566, 146, 0},
    { 104, 0x43, 4104, 146, 0},
    { 88, 0x43, 4718, 151, 0},
    { 0, 0x75, 4816, 145, 0},
    { 0, 0x78, 661, 142, 0},
    { 19, 0x78, 2948, 146, 0},
    { 6, 0x79, 2939, 184, 0},
    { 0, 0x69, 129, 176, 0},
    { 0, 0x68, 2990, 193, 0},
    { 0, 0x69, 829, 191, 0},
    { 0, 0x69, 106, 187, 0},
    // 165: Local time: 05:08:00 PM
    { 0, 0x69, 680, 182, 0},
    { 0, 0x69, 376, 183, 0},
    { 0, 0x79, 313, 181, 0},
    { 0, 0x78, 605, 177, 0},
    { 0, 0x78, 48, 165, 0},
    { 0, 0x68, 2907, 168, 0},
    { 12, 0x79, 626, 178, 0},
    { 0, 0x69, 768, 177, 0},
    { 0, 0x79, 1641, 171, 0},
    { 13, 0x77, 5066, 157, 0},
    { 0, 0x54, 4370, 148, 0},
    { 0, 0x61, 2346, 135, 0},
    { 0, 0x60, 40, 146, 0},
    { 0, 0x61, 2057, 145, 0},
    { 0, 0x74, 229, 146, 0},
    // 180: Local time: 05:23:00 PM
    { 0, 0x74, 0, 146, 0},
    { 0, 0x74, 145, 146, 0},
    { 0, 0x74, 1, 146, 0},
    { 0, 0x74, 279, 143, 0},
    { 0, 0x74, 48, 146, 0},
    { 0, 0x74, 0, 146, 0},
    { 0, 0x74, 41, 146, 0},
    { 0, 0x74, 0, 146, 0},
    { 0, 0x74, 1, 142, 0},
    { 0, 0x64, 374, 149, 0},
    { 0, 0x64, 0, 123, 0},
    { 0, 0x74, 881, 135, 0},
    { 0, 0x74, 0, 146, 0},
    { 0, 0x74, 36, 148, 0},
    { 0, 0x74, 48, 147, 0},
    // 195: Local time: 05:37:00 PM
    { 0, 0x74, 0, 146, 0},
    { 0, 0x74, 3, 146, 0},
    { 0, 0x74, 943, 147, 0},
    { 0, 0x74, 0, 144, 0},
    { 0, 0x74, 656, 148, 0},
    { 0, 0x74, 0, 148, 0},
    { 0, 0x74, 0, 148, 0},
    { 0, 0x74, 0, 148, 0},
    { 0, 0x73, 20, 146, 0},
    { 0, 0x83, 426, 148, 0},
    { 0, 0x74, 1, 148, 0},
    { 0, 0x74, 204, 137, 0},
    { 0, 0x83, 204, 149, 0},
    { 0, 0x74, 199, 151, 0},
    { 0, 0x74, 2423, 152, 0},
    // 210: Local time: 05:52:00 PM
    { 54, 0x51, 6826, 148, 0},
    { 78, 0x51, 4108, 148, 0},
    { 16, 0x42, 3196, 148, 0},
    { 0, 0x43, 10515, 145, 0},
    { 0, 0x13, 0, 147, 0},
    { 0, 0x13, 0, 146, 0},
    { 0, 0x13, 0, 146, 0},
    { 0, 0x13, 0, 146, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 146, 0},
    { 0, 0x13, 0, 146, 0},
    { 0, 0x13, 0, 145, 0},
    { 0, 0x13, 0, 145, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 144, 0},
    // 225: Local time: 06:07:00 PM
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 145, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 141, 0},
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 144, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 141, 0},
    { 0, 0x13, 0, 143, 0},
    // 240: Local time: 06:22:00 PM
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 141, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 143, 0},
    // 255: Local time: 06:37:00 PM
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 141, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 143, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 141, 0},
    // 270: Local time: 06:52:00 PM
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 142, 0},
    // 285: Local time: 07:07:00 PM
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 140, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 139, 0},
    { 0, 0x13, 0, 142, 0},
    // 300: Local time: 07:22:00 PM
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 142, 0},
    { 0, 0x13, 0, 139, 0},
    { 20, 0x23, 6300, 132, 0},
    { 44, 0x41, 6118, 143, 0},
    { 73, 0x40, 4262, 146, 0},
    { 0, 0x74, 9885, 146, 0},
    { 0, 0x78, 2920, 148, 0},
    { 0, 0x79, 502, 148, 0},
    { 12, 0x74, 6914, 148, 0},
    { 34, 0x61, 6265, 147, 0},
    { 0, 0x52, 6979, 147, 0},
    { 0, 0x62, 5035, 148, 0},
    { 22, 0x72, 2792, 148, 0},
    // 315: Local time: 07:37:00 PM
    { 16, 0x62, 2076, 148, 0},
    { 24, 0x54, 3623, 148, 0},
    { 34, 0x53, 4123, 146, 0},
    { 15, 0x73, 3317, 143, 0},
    { 0, 0x61, 4902, 135, 0},
    { 0, 0x64, 3717, 146, 0},
    { 0, 0x73, 3350, 146, 0},
    { 13, 0x41, 3658, 147, 0},
    { 20, 0x52, 3845, 140, 0},
    { 13, 0x74, 10844, 146, 0},
    { 16, 0x63, 6679, 146, 0},
    { 0, 0x63, 1894, 148, 0},
    { 0, 0x0, 0, 135, 0},
    { 0, 0x64, 6048, 148, 0},
    { 15, 0x63, 6907, 146, 0},
    // 330: Local time: 07:51:00 PM
    { 0, 0x44, 1963, 146, 0},
    { 0, 0x45, 1476, 146, 0},
    { 0, 0x75, 1592, 146, 0},
    { 0, 0x65, 1011, 143, 0},
    { 0, 0x86, 393, 148, 0},
    { 0, 0x65, 2594, 148, 0},
    { 20, 0x65, 4127, 148, 0},
    { 70, 0x43, 5014, 162, 0},
    { 54, 0x51, 5581, 148, 0},
    { 20, 0x52, 9974, 185, 0},
    { 17, 0x52, 8531, 186, 0},
    { 0, 0x52, 8069, 173, 0},
    { 0, 0x42, 7736, 179, 0},
    { 12, 0x62, 7516, 211, 0},
    { 17, 0x42, 6798, 203, 0},
    // 345: Local time: 08:06:01 PM
    { 49, 0x52, 8879, 185, 0},
    { 59, 0x53, 6344, 201, 0},
    { 16, 0x64, 6830, 183, 0},
    { 17, 0x64, 7715, 178, 0},
    { 10, 0x53, 5087, 168, 0},
    { 42, 0x63, 6016, 197, 0},
    { 0, 0x75, 2708, 205, 0},
    { 0, 0x65, 2610, 204, 0},
    { 15, 0x65, 2953, 213, 0},
    { 13, 0x65, 5848, 203, 0},
    { 0, 0x65, 2895, 206, 0},
    { 0, 0x75, 1537, 203, 0},
    { 25, 0x34, 2075, 182, 0},
    { 0, 0x24, 1107, 186, 0},
    { 27, 0x43, 6156, 186, 0},
    // 360: Local time: 08:21:00 PM
    { 17, 0x74, 9967, 180, 0},
    { 25, 0x63, 7743, 161, 0},
    { 13, 0x54, 6937, 192, 0},
    { 0, 0x73, 7418, 190, 0},
    { 17, 0x81, 3205, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 187, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 186, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 186, 0},
    { 0, 0x7c, 0, 198, 0},
    // 375: Local time: 08:36:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 194, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 188, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 187, 0},
    { 0, 0x7c, 0, 198, 0},
    // 390: Local time: 08:51:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 185, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    // 405: Local time: 09:07:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 189, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    // 420: Local time: 09:22:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    // 435: Local time: 09:37:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 191, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    // 450: Local time: 09:52:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    // 465: Local time: 10:07:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 198, 0},
    { 0, 0x7c, 0, 199, 0},
    { 0, 0x7c, 0, 199, 0},
    // 480: Local time: 10:22:00 PM
    { 0, 0x7c, 0, 198, 0},
    { 17, 0x70, 3257, 144, 0},
    { 20, 0x53, 11536, 168, 0},
    { 27, 0x63, 8856, 160, 0},
    { 12, 0x42, 6008, 145, 0},
    { 0, 0x36, 2673, 148, 0},
    { 0, 0x26, 12, 145, 0},
    { 0, 0x36, 3, 146, 0},
    { 0, 0x26, 5, 142, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 146, 0},
    // 495: Local time: 10:37:00 PM
    { 0, 0x26, 0, 131, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 143, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 142, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 148, 0},
    { 0, 0x26, 0, 146, 0},
    // 510: Local time: 10:52:00 PM
    { 0, 0x26, 0, 136, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 143, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 145, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 145, 0},
    { 0, 0x26, 0, 147, 0},
    // 525: Local time: 11:07:00 PM
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 145, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 145, 0},
    { 0, 0x26, 0, 147, 0},
    // 540: Local time: 11:22:00 PM
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 143, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 146, 0},
    // 555: Local time: 11:37:00 PM
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 143, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 143, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 143, 0},
    { 0, 0x26, 0, 146, 0},
    // 570: Local time: 11:52:00 PM
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 148, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 146, 0},
    // 585: Local time: 12:07:00 AM
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 147, 0},
    // 600: Local time: 12:22:00 AM
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 45, 133, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 144, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x26, 0, 147, 0},
    { 0, 0x69, 1595, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 144, 0},
    { 0, 0x6a, 0, 146, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 146, 0},
    // 615: Local time: 12:37:00 AM
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 132, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 144, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 143, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 147, 0},
    // 630: Local time: 12:52:00 AM
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 132, 0},
    { 0, 0x6a, 0, 147, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x6a, 0, 148, 0},
    { 0, 0x5a, 17, 148, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    // 645: Local time: 01:07:00 AM
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    // 660: Local time: 01:22:00 AM
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5a, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5b, 0, 149, 0},
    { 0, 0x5a, 1186, 164, 0},
    // 675: Local time: 01:37:00 AM
    { 26, 0x33, 2111, 155, 0},
    { 27, 0x62, 8462, 150, 0},
    { 0, 0x64, 666, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    // 690: Local time: 01:52:00 AM
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 150, 0},
    // 705: Local time: 02:07:00 AM
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 149, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x44, 0, 150, 0},
    { 0, 0x63, 2402, 150, 0},
    { 0, 0x72, 0, 150, 0},
    { 0, 0x72, 0, 150, 0},
    { 0, 0x72, 0, 150, 0},
    { 0, 0x72, 0, 150, 0},
    // 720: Local time: 02:22:00 AM
    { 0, 0x72, 0, 150, 0},
    { 0, 0x72, 0, 150, 0},
    { 0, 0x71, 0, 150, 0},
    { 0, 0x71, 2925, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    { 0, 0x83, 0, 150, 0},
    // 735: Local time: 02:37:00 AM
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 150, 0},
    { 0, 0x82, 0, 137, 0},
    { 0, 0x82, 0, 150, 0},
    // 750: Local time: 02:52:00 AM
    { 0, 0x81, 1501, 150, 0},
    { 0, 0x7d, 0, 150, 0},
    { 0, 0x7d, 0, 150, 0},
    { 0, 0x7d, 0, 150, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x7d, 138, 151, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x7d, 0, 151, 0},
    { 0, 0x9, 1173, 151, 0},
    { 0, 0x7, 0, 151, 0},
    // 765: Local time: 03:07:00 AM
    { 0, 0x7, 0, 151, 0},
    { 0, 0x7, 0, 151, 0},
    { 0, 0x7, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 138, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    // 780: Local time: 03:22:00 AM
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x8, 0, 151, 0},
    { 0, 0x17, 237, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    // 795: Local time: 03:37:00 AM
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x0, 0, 141, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    // 810: Local time: 03:51:00 AM
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 148, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    // 825: Local time: 04:06:00 AM
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    // 840: Local time: 04:21:00 AM
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x16, 0, 151, 0},
    { 0, 0x26, 467, 150, 0},
    { 0, 0x26, 0, 151, 0},
    { 0, 0x26, 0, 151, 0},
    { 0, 0x26, 0, 151, 0},
    // 855: Local time: 04:36:00 AM
    { 0, 0x26, 0, 151, 0},
    { 0, 0x26, 0, 151, 0},
    { 0, 0x35, 13, 151, 0},
    { 0, 0x35, 0, 151, 0},
    { 0, 0x35, 0, 151, 0},
    { 0, 0x35, 85, 151, 0},
    { 0, 0x35, 0, 151, 0},
    { 0, 0x35, 155, 151, 0},
    { 0, 0x45, 0, 151, 0},
    { 0, 0x57, 472, 150, 0},
    { 0, 0x5a, 0, 150, 0},
    { 8, 0x69, 600, 150, 0},
    { 0, 0x77, 1000, 151, 0},
    { 0, 0x7, 0, 151, 0},
    { 0, 0x7, 0, 151, 0},
    // 870: Local time: 04:51:00 AM
    { 0, 0x7, 0, 151, 0},
    { 0, 0x7, 0, 151, 0},
    { 0, 0x7, 0, 151, 0},
    { 16, 0x62, 8336, 150, 0},
    { 0, 0x72, 817, 150, 0},
    { 0, 0x70, 1702, 163, 0},
    { 0, 0x6e, 1035, 149, 0},
    { 0, 0x6f, 241, 149, 0},
    { 0, 0x6f, 496, 149, 0},
    { 0, 0x6f, 150, 150, 0},
    { 0, 0x6f, 930, 150, 0},
    { 0, 0x7f, 535, 150, 0},
    { 0, 0x7f, 1247, 150, 0},
    { 0, 0x6e, 220, 150, 0},
    { 0, 0x6e, 0, 150, 0},
    // 885: Local time: 05:06:00 AM
    { 0, 0x7c, 3367, 150, 0},
    { 0, 0x78, 925, 150, 0},
    { 0, 0x78, 3, 150, 0},
    { 0, 0x69, 125, 150, 0},
    { 13, 0x79, 4052, 149, 0},
    { 16, 0x5a, 2577, 164, 0},
    { 0, 0x6a, 2769, 147, 0},
    { 12, 0x69, 2697, 147, 0},
    { 0, 0x69, 349, 143, 0},
    { 0, 0x77, 1634, 147, 0},
    { 0, 0x77, 918, 146, 0},
    { 0, 0x77, 719, 135, 0},
    { 0, 0x69, 299, 146, 0},
    { 0, 0x69, 1, 148, 0},
    { 0, 0x69, 2372, 146, 0},
    // 900: Local time: 05:21:00 AM
    { 0, 0x27, 727, 146, 0},
    { 0, 0x27, 0, 146, 0},
    { 0, 0x27, 131, 145, 0},
    { 0, 0x27, 0, 142, 0},
    { 0, 0x27, 0, 146, 0},
    { 0, 0x27, 5, 146, 0},
    { 0, 0x27, 6, 146, 0},
    { 0, 0x27, 45, 146, 0},
    { 0, 0x27, 36, 142, 0},
    { 0, 0x27, 8, 146, 0},
    { 0, 0x26, 12, 146, 0},
    { 0, 0x26, 48, 135, 0},
    { 0, 0x26, 0, 146, 0},
    { 0, 0x26, 5, 137, 0},
    { 0, 0x26, 0, 146, 0},
  };
  *len = ARRAY_LENGTH(samples);
  return samples;
}

