#include "setup.h"

void setupSensor() {
  Serial.println(" == SETUP SENSOR ==");

  pinMode(SENSOR, INPUT_PULLUP);// define pin as Input sensor
}


void setupServo(Servo &servo) {
  Serial.println(" == SETUP SERVO ==");

  Serial.print(" === INITIAL POSITION: "); 
  Serial.println(servo.read());
  
  servo.attach(ACTION);
}
