#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);
int firstLEDPin = 13;
int secondLEDPin = 12;
int thirdLEDPin = 11;

int firstLED = 50;
int secondLED = 200;
int thirdLED = 1000;

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
  //FIRST LED (RED)
  digitalWrite(firstLEDPin, HIGH);
  delay(firstLED);
  digitalWrite(firstLEDPin, LOW);
  delay(firstLED);
  digitalWrite(firstLEDPin, HIGH);
  delay(firstLED);
  digitalWrite(firstLEDPin, LOW);
  delay(firstLED);digitalWrite(firstLEDPin, HIGH);
  delay(firstLED);
  digitalWrite(firstLEDPin, LOW);
  delay(firstLED);digitalWrite(firstLEDPin, HIGH);
  delay(firstLED);
  digitalWrite(firstLEDPin, LOW);
  delay(firstLED);digitalWrite(firstLEDPin, HIGH);
  delay(firstLED);
  digitalWrite(firstLEDPin, LOW);
  delay(firstLED);

  //SECOND LED (GREEN)
  digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);
  digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);digitalWrite(secondLEDPin, HIGH);
  delay(secondLED);
  digitalWrite(secondLEDPin, LOW);
  delay(secondLED);

  //THIRD LED (BLUE)
  digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);digitalWrite(thirdLEDPin, HIGH);
  delay(thirdLED);
  digitalWrite(thirdLEDPin, LOW);
  delay(thirdLED);
  
  delay(LongWait);
}

// put function definitions here:
/*int myFunction(int x, int y) {
  
}
*/