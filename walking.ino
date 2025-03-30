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

  // Initialize all servos to 90 degrees/neutral position
  servoFrontLeft2.write(90);
  servoFrontRight1.write(90);
  servoBackLeft3.write(90);
  servoBackRight4.write(90);
}

void loop() {
  // Move Front Left and Back Right servos from -90° to 90° & then delays for smoother movement
  for (int pos = -90; pos <= 90; pos++) {
    servoFrontLeft2.write(pos);
    servoBackRight4.write(pos);
    delay(10);
  }

  // Move Front Right and Back Left servos from 90° to -90° (inverted movement) & then delays for smoother movement
  for (int pos = 90; pos >= -90; pos--) {
    servoFrontRight1.write(-pos);
    servoBackLeft3.write(-pos);
    delay(10);
  }
}

