int j=1;
int wait=500;
String mystring="j = ";
int x=3;
int y=7;
int z;
String sting=" + ";
String mysting=" = ";

void setup() {
Serial.begin(9600);

}

void loop() { 
 Serial.print(mystring);
Serial.println(j);
j=j+1;

   
z=x+y;
Serial.print(x);
 Serial.print(sting);
Serial.print(y);
Serial.print(mysting);
Serial.println(z);
delay(wait);
}
