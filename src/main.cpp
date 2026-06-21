#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  //First project with external LED and breadboard.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(13,HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(500);

}

// put function definitions here:
/*int myFunction(int x, int y) {
  
}
*/