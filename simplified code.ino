#include <Servo.h> 

// declare servo position
Servo servoLeft4;
Servo servoRight3; 

void setup() {
  // Attach each servo to a specific pin
  servoLeft4.attach(12);
  servoRight3.attach(11); 
}

void loop() {
  // Move servos to neutral position (90 degrees)
  servoLeft4.write(90);  
  servoRight3.write(90);
  
  delay(1000); // wait

  // Loop to move both servos:
  // left servo moves 90° to 180°
  // right servo moves 90° to 0°
  for (int pos = 90; pos <= 180; pos += 1) {
    servoLeft4.write(pos);        // Move left servo to  current position
    servoRight3.write(180 - pos); // Move right servo in opposite direction
    delay(15);                    // delay for smooth movement
  }
}