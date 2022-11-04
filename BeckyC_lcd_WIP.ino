// By: Rebekah Choi
// Semester project WIP
// References - These websites are where I got my code snippets from:
// https://docs.arduino.cc/learn/electronics/lcd-displays (how to use LCD)
// https://create.arduino.cc/projecthub/electropeak/use-an-ir-remote-transmitter-and-receiver-with-arduino-1e6bc8
// (how to use the IRremote library)

#include <LiquidCrystal.h>
#include <IRremote.h>  //including infrared remote header file     

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char label[17] = "Current savings:";
double currentAmount = 0.00;

// the pin where you connect the output pin of IR sensor
const int RECV_PIN = 9;
IRrecv irrecv(RECV_PIN);     
decode_results results; 

void setup() {
  Serial.begin(9600);     
  irrecv.enableIRIn();     
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // first row label
  lcd.setCursor(0, 0);
  lcd.print(label);
}

void loop() {
  // print current amount 
  lcd.setCursor(0, 1);
  lcd.print('$');
  lcd.setCursor(1,1);
  lcd.print(currentAmount);

  // TODO: update the current amount based on what the receiver receives
}
