
#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 


LiquidCrystal_I2C lcd(0x3f, 16, 2); 
void setup() { 
	lcd.init();
	lcd.backlight();
}

void loop() { 
	lcd.setCursor(0,0); 
	int x = analogRead(A0)
	float Vin = x * ( 5.0 / 1024.0);
	float temp = (Vin - 0.5)* 100;

	lcd.print(temp); 
	delay(100); 
	lcd.clear();
}
