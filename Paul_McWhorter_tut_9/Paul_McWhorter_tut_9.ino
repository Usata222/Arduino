void setup() {
  
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(9,64);
delay(100);
analogWrite(9,0);
delay(100);
}
