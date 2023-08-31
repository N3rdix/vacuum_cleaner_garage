#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <Arduino.h>
#include <Servo.h>
#include "const.h"

bool detect(); 
void open(Servo &servo);
void close(Servo &servo);

#endif
