#include <LiquidCrystal.h>

const int rs=13, en=11, d4=6, d5=5, d6=4, d7=3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

 byte mychar[8] {
    B00000,
    B10001,
    B00000,
    B00000,
    B10001,
    B01110,
    B00000,
  };

void setup() {

  Serial.begin(9600);
  lcd.createChar(0,mychar);
  lcd.begin(16,2);
  
  //This begins the lcd and specifies the rows and columns in the LCD
  lcd.setCursor(7,1);
  lcd.write(byte(0));
  delay(1000);
  lcd.clear();
  lcd.home();
  lcd.print("Hello, Welcome to the program");
  delay(1000);
  for(int i=0;i<16;i++){
    lcd.scrollDisplayLeft();
    delay(1000);
  }
    lcd.clear();
}

void loop() {

  //Sets the cursor to the position specified, rows have 2 values 0 and 1 whereas columns can take 0 to 15 values
  if(Serial.available()){
    delay(1000);
    while(Serial.available()>0){
      lcd.write(Serial.read());
      delay(150);
    }
      delay(1500);
  }
}