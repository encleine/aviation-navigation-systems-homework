//* سؤال ثاني
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT22

int baz=6;
float temp;
DHT dht(DHTPIN,DHTTYPE);

void setup() {
	pinMode(baz, OUTPUT);
	dht.begin();
}

void loop() {
	temp = dht.readTemperature();

	digitalWrite(baz, temp >= 37)
	delay(1000);
}