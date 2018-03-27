#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *Motor = AFMS.getMotor(4);

void setup() {
    AFMS.begin();
    Motor->setSpeed(150);
    

}

void loop() {
    Motor->run(FORWARD);
    delay(2000);
    Motor->run(RELEASE);
    delay(1000);
    Motor->run(BACKWARD);
    delay(2000);
}