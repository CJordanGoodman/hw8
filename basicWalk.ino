/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo frontLeft;  // create servo object to control a servo
Servo frontRight;
Servo backLeft;
Servo backRight;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  frontLeft.attach(12);  // attaches the servo on pin 5 to the servo object
  frontRight.attach(6);
  backLeft.attach(11);
  backRight.attach(10);
  frontLeft.write(120);
  frontRight.write(0);
  backLeft.write(120);
  backRight.write(0);
}

void step() {
  frontLeft.write(30);
  delay(500);
  frontRight.write(90);
  delay(500);
  backLeft.write(30);
  delay(500);
  backRight.write(90);
  delay(500);
  frontLeft.write(120);
  frontRight.write(0);
  backLeft.write(120);
  backRight.write(0);
  delay(1000);
}

void loop() {
  step();
}
