#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int sensorPin = A0;   // select the input pin for the potentiometer
int digitalValue = 0;  // variable to store the value coming from the sensor
float analogVoltage = 0.00;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.clear();
  // Print a message to the LCD.
  lcd.print("Welcome Hackers!");
  delay(3000);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  
  lcd.setCursor(0, 1);
  lcd.print("Analog volt= ");
  digitalValue = analogRead(sensorPin);
  analogVoltage = (digitalValue * 5.00)/1023.00;
  lcd.print(analogVoltage);
  delay(1000);
  
}