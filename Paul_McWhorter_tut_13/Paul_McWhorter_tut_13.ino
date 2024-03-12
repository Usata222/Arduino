int mypin=A2;
int readVal;
float V2;
int dt=250;
int red = 9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(mypin, INPUT);
pinMode(red, OUTPUT);

}

void loop() {

  readVal=analogRead(mypin);
  V2=(5./1023.)*readVal;
  Serial.print("voltage is");
  Serial.println(V2);
  if (V2>4.0) {
    digitalWrite(red, HIGH);
  }

  if (V2<4.0) {
    digitalWrite(red, LOW);
  }
  delay(dt);     

  // put your main code here, to run repeatedly:

}
 