#include <LiquidCrystal.h>

const int rs=13, en=11, d4=6, d5=5, d6=4, d7=3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  delay(1000);
  lcd.clear();
  lcd.home();
  lcd.cursor();
  lcd.blink();
  delay(1000);
  lcd.print("Type in Serial");
  delay(1500);  
  lcd.clear();
  Serial.println("Code setup succesfully");
}

void loop() {
  //Sets the cursor to the position specified, rows have 2 values 0 and 1 whereas columns can take 0 to 15 values
  if(Serial.available()){
    delay(1000);
    while(Serial.available()>0){
      lcd.write(Serial.read());
      delay(150);
    }
    delay(3000);
    lcd.clear();
  }
}