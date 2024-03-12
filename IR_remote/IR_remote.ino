
#include <IRremote.h>

int RECV_PIN = 11;
int led1 = 2;
int led2 = 4;
int led3 = 7;
int itsONled[] = {0,0,0,0};

#define code1 3959006780
#define code2 1155821737
#define code3 2257963717

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop(){
  if (irrecv.decode(&results)) {
    unsigned int value = results.value;
    switch(value) {
      case code1:
      if(itsONled[1] == 1) {
        digitalWrite(led1, LOW);
        itsONled[1] = 0;
      } else {
        digitalWrite(led1, HIGH);
        itsONled[1] = 1;
      }
      break;
      case code2:
       if(itsONled[2] == 1) {
        digitalWrite(led2, LOW);
        itsONled[2] = 0;
       } else {
        digitalWrite(led2, HIGH);
        itsONled[2] = 1;
       }
       break;
       case code3:
       if(itsONled[3] == 1) {
        digitalWrite(led3, LOW);
        itsONled[3] = 0;
       } else {
        digitalWrite(led3, HIGH);
        itsONled[3] = 1;
       }
        break;
    }
     Serial.println(results.value, DEC);
     irrecv.resume();
  }
}
