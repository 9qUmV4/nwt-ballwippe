#include <Servo.h>

#define SERVO_PIN 3 

Servo servo;

void setup() {
    servo.attach(SERVO_PIN);
    servo.write(180);
}

void loop() {
    // servo.write(180);
    // delay(1000);
    // servo.write(0);
    // delay(5000);
    // servo.write(0);
    // delay(1000);
    ;
}