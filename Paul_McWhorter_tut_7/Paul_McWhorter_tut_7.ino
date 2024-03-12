int redpin=9;
int bright=100;

void setup() {
pinMode(redpin,OUTPUT);

}

void loop() {
analogWrite(redpin,bright);

}
