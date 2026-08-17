#include <Arduino.h>

const int pinBliz = 8;
const int pinLED1 = 13;
const int pinLED2 = 12; 
const int pinSensor = 7;
int state;

void alarm();
void chill();

void setup() {
  pinMode(pinBliz, OUTPUT);
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinSensor, INPUT_PULLUP);
}

void loop() {
  state=digitalRead(pinSensor);
  if (state==HIGH){
    alarm();
  }else {
    chill();
  }
}

void alarm(){
  tone(pinBliz, 1400);
  digitalWrite(pinLED1, HIGH); 
  delay(400); 
  digitalWrite(pinLED1, LOW);
  tone(pinBliz, 1000); 
  digitalWrite(pinLED2, HIGH);
  delay(400); 
  digitalWrite(pinLED2, LOW);
}

void chill(){
  digitalWrite(pinLED1, HIGH); 
  delay(50); 
  digitalWrite(pinLED1, LOW);
  delay(2000);
}