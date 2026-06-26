#include <Arduino.h>

const int pinBliz = 8;
const int pinLED = 13; 

void setup() {
  pinMode(pinBliz, OUTPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  tone(pinBliz, 1400);
  digitalWrite(pinLED, HIGH); 
  delay(400); 

  tone(pinBliz, 1000); 
  digitalWrite(pinLED, LOW); 
  delay(400); 

}