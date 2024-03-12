#include <Servo.h>

int photo;
Servo s;

void setup()
{
  
  s.attach(8);
  Serial.begin(9600);

}

void loop()
{
  photo = analogRead(A1);
  Serial.println(photo);
  if(photo < 1800)
  {
    s.write(180);
  }
  else
  {
    s.write(0);
  }

}
