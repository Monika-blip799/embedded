#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,7,6,5,4,3,2,1,0);
void setup() {
  lcd.begin(16,2);
  lcd.print("Hello!");
  // put your setup code here, to run once:
  }
void loop() {
  // put your main code here, to run repeatedly:
}
