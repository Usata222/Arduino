#include<Servo.h>
const int Y_pin=A0;//analog pin

Servo myservo;

int val;

void setup(){
  myservo.attach(7);
}

void loop(){
  val=analogRead(Y_pin);
  val=map(val,90,180,90,180);
  myservo.write(val);
  delay(15);
}
