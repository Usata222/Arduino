int readpin=A3;
float V2=0;
int delayTime=500;
int readval;

void setup() {
pinMode(readpin,INPUT);
Serial.begin(9600);
}

void loop() {
 readval=analogRead(readpin);
 V2=(5./1023.)*readval;
 Serial.println(V2);
 delay(delayTime);
}
