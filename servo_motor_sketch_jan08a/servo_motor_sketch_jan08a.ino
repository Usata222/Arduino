#include <Servo.h>

Servo servo;

void setup() {
 servo.attach(8);
 servo.write(270);
 delay(2000);

}

void loop() {

  servo.write(0);
  delay(1000);
  servo.write(90);
  delay(1000);

}
