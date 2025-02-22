#include <Servo.h>
Servo myServo;
const int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  myServo.attach(9);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    myServo.write(90);  // Move to 90 degrees
    delay(1000);
  } else {
    myServo.write(0);   // Move back to 0 degrees
  }
}
