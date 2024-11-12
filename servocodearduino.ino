#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9); // Pin 9 untuk servo
}

void loop() {
  myServo.write(0);    // Posisi servo 0 derajat
  delay(1000);
  myServo.write(90);   // Posisi servo 90 derajat
  delay(1000);
  myServo.write(180);  // Posisi servo 180 derajat
  delay(1000);
}
