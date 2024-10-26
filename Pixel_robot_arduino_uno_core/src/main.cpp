/*
  Project to build a robot named Pixel on base ESP32 CAM modul and Arduino UNO R3.
  version: 0.0.5
  date: 23.10.2024
  modified 25.10.2024
  Developer: Valeriy Chernobrovyi (chernobrovyivs)
  Description: this is Arduino UNO Core for robot Pixel
*/

#include <Arduino.h>
#include <arduino_all_remote_control.h>

void setup() {
  init_arduino_all_remote_control();
  calibration_servo_motor_func();
}

void loop() {
  arduino_all_remote_control_func();
}