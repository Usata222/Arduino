int redpin=9;
int bright=255;

void setup() {
pinMode(redpin,OUTPUT);

}

void loop() {
analogWrite(redpin,bright);

}
