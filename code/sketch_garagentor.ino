#include "setup.h"
#include "functions.h"
#include <Servo.h>

Servo servo180;
bool angedockt;

void setup() {
  Serial.begin(9600);// setup Serial Monitor to display information

  setupSensor();
  setupServo(servo180);

  //Tor initial öffnen
  open(servo180);
  angedockt = true;
}

void loop() {
  bool state = detect();

  switch (state) {
    case true:
      //Angedockt
      if (angedockt == false) {
        open(servo180);
        angedockt = true;
      }
      break;

    case false:
      //Unterwegs
      if (angedockt == true) {
        close(servo180);
        angedockt = false;
      }
      break;
  }
  delay(250);
}
