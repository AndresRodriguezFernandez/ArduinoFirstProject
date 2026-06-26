#include <Arduino.h>

const int pinBliz = 8;
const int pinLED1 = 13;
const int pinLED2 = 12; 

void setup() {
  pinMode(pinBliz, OUTPUT);
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
}

void loop() {
  tone(pinBliz, 1400);
  digitalWrite(pinLED1, HIGH); 
  delay(400); 
  digitalWrite(pinLED1, LOW);
  tone(pinBliz, 1000); 
  digitalWrite(pinLED2, HIGH);
  delay(400); 
  digitalWrite(pinLED2, LOW);

}