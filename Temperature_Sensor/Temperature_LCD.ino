#include<LiquidCrystal.h>

const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 

float celsius;
int temp = A5;

void setup(){
	pinMode(temp,INPUT);
}

void loop(){
	celsius = analogRead(temp)*0.004882814;
  	celsius = (celsius - 0.5) * 100.0;
  	
  	lcd.setCursor(0,1);
	lcd.print("Temp: ");
  	lcd.print(celsius);
	lcd.print(" C");
  	delay(1000);
  	lcd.clear();
}