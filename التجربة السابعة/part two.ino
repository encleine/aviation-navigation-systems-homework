//* سؤال ثالث
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT22

int ledRed = 5;
float hum;
DHT dht(DHTPIN,DHTTYPE);

void setup() {
	pinMode(ledRed, OUTPUT);
	dht.begin();
}

void loop() {
	hum = dht.readHumidity();
	
	digitalWrite(ledRed, hum >= 25)
	delay(1000);
}