
#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 

float geTemp(int x) {
	float Vin = x * ( 5.0/ 1024.0);
	return Vin * 100;
}

LiquidCrystal_I2C lcd(0x27, 16, 2); 
void setup() { 
	lcd.begin(16,2); 
	lcd.backlight(); 
	Serial.begin(9600);
}

void loop() { 
	lcd.setCursor(0,0); 
	float temp = geTemp(analogRead(A0));

	lcd.print(temp); 
	delay(100); 
	lcd.clear();
}