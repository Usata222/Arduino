int redpin=9;
int bright=0;
int sec=100;
int redpn=6;

void setup() {
pinMode(redpin,OUTPUT);

}

void loop() {
analogWrite(redpin,bright);
delay(sec);
analogWrite(redpin,1);
delay(sec);
analogWrite(redpin,2);
delay(sec);
analogWrite(redpin,4);
delay(sec);
analogWrite(redpin,8);
delay(sec);
analogWrite(redpin,16);
delay(sec);
analogWrite(redpin,32);
delay(sec);
analogWrite(redpin,64);
delay(sec);
analogWrite(redpin,128);
delay(sec);
analogWrite(redpin,255);
delay(sec);



analogWrite(redpn,bright);
delay(sec);
analogWrite(redpn,2);
delay(sec);
analogWrite(redpn,4);
delay(sec);
analogWrite(redpn,8);
delay(sec);
analogWrite(redpn,16);
delay(sec);
analogWrite(redpn,32);
delay(sec);
analogWrite(redpn,64);
delay(sec);
analogWrite(redpn,128);
delay(sec);
analogWrite(redpn,255);
delay(sec);



}
