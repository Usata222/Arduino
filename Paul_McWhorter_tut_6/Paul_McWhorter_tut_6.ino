int RED=13;
int dit=1000;
//float pi=3.14
//string name=Usata

void setup() {
pinMode(RED,OUTPUT);
}

void loop() {
digitalWrite(RED,HIGH);
delay(dit);
digitalWrite(RED,LOW);
delay(dit);

}
