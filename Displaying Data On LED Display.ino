// 1- Name : Miran Member
// 2- Description - using a 16x2 display display the information from photo sensor 



#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  lcd.setCursor(0, 0); // set cursor to default location
  if (value <= 205) {
    lcd.print("Dark");
  }
  else if (value <= 410) {
    lcd.print("Partially Dark");
  }
  else if (value <= 615) {
    lcd.print("Medium");
  }
  else if (value <= 820) {
    lcd.print("Partially Light");
  } 
  else if (value <= 1023) {
    lcd.print("Fully Lit");
  }
  delay(500);
  lcd.clear(); // clearing the screen to refresh it
}
