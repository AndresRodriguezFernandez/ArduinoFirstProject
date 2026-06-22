#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);
int redLed = 4;
float pi = 3.14;
int dit = 250;
int dah = 700;
int LongWait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  //First project with external LED and breadboard.
}

void loop() {
  // put your main code here, to run repeatedly:
  //S
  digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed,LOW);
  delay(dit);
  digitalWrite(redLed,HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  //O
  digitalWrite(redLed, HIGH);
  delay(dah);
  digitalWrite(redLed, LOW);
  delay(dah);
  digitalWrite(redLed,HIGH);
  delay(dah);
  digitalWrite(redLed, LOW);
  delay(dah);
  digitalWrite(redLed,HIGH);
  delay(dah);
  digitalWrite(redLed,LOW);
  delay(dah);
  //S
  digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed,LOW);
  delay(dit);
  digitalWrite(redLed,HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(LongWait);
}

// put function definitions here:
/*int myFunction(int x, int y) {
  
}
*/