#include <Arduino.h>
#include <arduino_all_remote_control.h>

void setup() {
  init_arduino_all_remote_control();
}

void loop() {
  arduino_all_remote_control_func();
}