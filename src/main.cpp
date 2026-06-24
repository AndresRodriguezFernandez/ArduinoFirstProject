#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);
int firstLEDPin = 13;
int secondLEDPin = 12;
int thirdLEDPin = 11;

int ledLenght = 150;
int waitLenght = 20;

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
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  //BACK
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  //1
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  //FRONT
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  //2

  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  //BACK

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);

  digitalWrite(thirdLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(thirdLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(secondLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(secondLEDPin, LOW);
  delay(waitLenght);
  digitalWrite(firstLEDPin, HIGH);
  delay(ledLenght);
  digitalWrite(firstLEDPin, LOW);


  
}

// put function definitions here:
/*int myFunction(int x, int y) {
  
}
*/