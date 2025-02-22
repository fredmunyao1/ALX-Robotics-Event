void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  analogWrite(9, 255);   // Red
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000);
  
  analogWrite(9, 0);
  analogWrite(10, 255);  // Green
  analogWrite(11, 0);
  delay(1000);
  
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);  // Blue
  delay(1000);
}
