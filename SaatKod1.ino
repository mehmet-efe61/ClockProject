#include <DS3231.h>
#define latchPin 5
#define clockPin 6
#define dataPin 4

String time = "17:01"


//DS3231 rtc(SDA, SCL);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
    digitalWrite(latchPin, LOW);
    for (int i=0, i++, i<5) {
  String temp = time.substring(i,i+1);
  if temp == ':'{
    continue;
  }
  else {
    registerWrite(temp);
  }
}

  digitalWrite(latchPin, HIGH);


}




void registerWrite(String timestr){

  byte result = 0;

  switch(num){
    case -1:
    result = 0b00000000;
    break;
    
    case 0:
    result = 0b11111100;
    break;

    case 1:
    result = 0b01100000;
    break;

    case 2:
    result = 0b11011010;
    break;

    case 3:
    result = 0b11110010;
    break;

    case 4:
    result = 0b01100110;
    break;

    case 5:
    result = 0b10110110;
    break;

    case 6:
    result = 0b10111110;
    break;

    case 7:
    result = 0b11100000;
    break;

    case 8:
    result = 0b11111110;
    break;

    case 9:
    result = 0b11110110;
    break;
  }
  shiftOut(dataPin, clockPin, LSBFIRST, result);
}
