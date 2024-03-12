int redwire=A3;
int readvalue;
float v2=0;
int tyme=500;

void setup() {
pinMode(redwire,INPUT);
Serial.begin(9600);
}

void loop() {
readvalue=analogRead(redwire);
v2=(5./1023.)*readvalue;
Serial.println(v2);
delay(tyme);
}
