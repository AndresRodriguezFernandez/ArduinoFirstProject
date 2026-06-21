#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  //First project with external LED and breadboard.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(1000);

}

// put function definitions here:
/*int myFunction(int x, int y) {
  
}
*/