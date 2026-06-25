#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);
int firstLEDPin = 13;
int secondLEDPin = 12;
int thirdLEDPin = 11;

int waitLenght = 500;

int LongWait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(firstLEDPin, OUTPUT);
  pinMode(secondLEDPin, OUTPUT);
  pinMode(thirdLEDPin, OUTPUT);
  //First project with external LED and breadboard.
}

void loop() {
  // put your main code here, to run repeatedly:
  //FRONT
  digitalWrite(firstLEDPin, HIGH);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(waitLenght);
  digitalWrite(firstLEDPin, LOW);
  digitalWrite(secondLEDPin, LOW);
  digitalWrite(thirdLEDPin, LOW);
  delay(LongWait);
  
  
}

// put function definitions here:
/*int myFunction(int x, int y) {
  
}
*/