#define LED 13 // LED connected to
               // digital pin 13
void setup()
{
 pinMode(LED, OUTPUT); // sets the digital
                       // pin as output

}

void loop()
{
  digitalWrite(LED, HIGH); //turns 
  delay(1000);             //
  digitalWrite(LED, LOW);  //
  delay(100);             //
}