//library
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//input of the photocell
int sensor = A0;
//value of the input of the photocell
int sensorValue =0;


void setup() {
  lcd.begin(16, 2); //LCD setup
}

void loop() {
  lcd.clear(); //cls
  sensorValue = analogRead(sensor); //gives the value picked upby sensor to sensorValue
  lcd.print("Value: "); //prints "Value: "
  lcd.print(sensorValue); //prints the value
  lcd.blink(); //blinks the cursor
  delay(500); //updates every 500ms
}
