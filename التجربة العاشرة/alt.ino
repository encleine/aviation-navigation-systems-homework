
#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27, 16, 2); 
void setup() { 
	lcd.begin(16,2); 
	lcd.backlight(); 
	Serial.begin(9600);
}

void loop() { 
	lcd.setCursor(0,0); 
	int x = analogRead(A0);
	float temp = ((x * ( 5.0 / 1024.0)) - 0.5)* 100;

	lcd.print(temp); 
	delay(100); 
	lcd.clear();
}