#include "functions.h"

bool detect() {
  int L = digitalRead(SENSOR);// read the sensor
  if ( L == HIGH ) {
    //Serial.println("Objekt erkannt");
    return true;
  }
  else return false;
}

void open(Servo &servo) {
  Serial.println("Tor öffnet");

  for (int pos = 0; pos <= 90; pos += 1) {
    servo.write(pos);
    delay(7);
  }
  Serial.print(" == Position: ");
  Serial.println(servo.read());
}


void close(Servo &servo) {
  Serial.println("Tor schließt");

  for (int pos = 90; pos >= 0; pos -= 1) { // und das gleiche zurück
    servo.write(pos);
    delay(7);
  }
  Serial.print(" == Position: ");
  Serial.println(servo.read());
}
