#include <Arduino.h>
#include <Servo.h>

#define MOTOR_PIN           9

Servo MOTORservoCalibration;

void init_calibration_func()
{
    MOTORservoCalibration.attach(MOTOR_PIN);
}

void calibration_servo_motor_func()
{
    MOTORservoCalibration.write(0);
    delay(1000);
    MOTORservoCalibration.write(90);
    delay(1000);
    MOTORservoCalibration.write(180);
    delay(1000);
}