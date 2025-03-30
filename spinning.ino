#include <Servo.h>

// Define which servos are which leg
Servo servoFrontLeft2;   // Front Left Leg
Servo servoFrontRight1;  // Front Right Leg
Servo servoBackLeft3;    // Back Left Leg
Servo servoBackRight4;   // Back Right Leg

void setup() {
  // Attach each servo to a specific pin
  servoFrontLeft2.attach(10);
  servoFrontRight1.attach(9);
  servoBackLeft3.attach(11);
  servoBackRight4.attach(12);

  // Initialize servo/neutral position
  servoFrontLeft2.write(180);
  servoFrontRight1.write(0);
  servoBackLeft3.write(90);
  servoBackRight4.write(90);
}

void loop() {
  spinLeft();   // Move servos in one direction
  delay(1000);  // Wait
  spinRight();  // Move servos in opposite direction
  delay(1000);  // Wait
}

void spinLeft() {
  // Gradually adjust servos from 0 to 180 degrees & then delays for smoother movement
  for (int pos = 0; pos <= 180; pos++) {
    servoFrontLeft2.write(pos);
    servoFrontRight1.write(pos);
    servoBackLeft3.write(pos);
    servoBackRight4.write(pos);
    delay(10); //
  }
}

void spinRight() {
  // Gradually adjust servos from 180 back to 0 degrees & then delays for smoother movement
  for (int pos = 180; pos >= 0; pos--) {
    servoFrontLeft2.write(pos);
    servoFrontRight1.write(pos);
    servoBackLeft3.write(pos);
    servoBackRight4.write(pos);
    delay(10); // Small delay for smooth movement
  }
}