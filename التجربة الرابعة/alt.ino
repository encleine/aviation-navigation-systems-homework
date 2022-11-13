
int baz=6;
int ledGreen=7;
int ledYellow=8;
int ledRed=9;

void setup() {
	pinMode(baz, OUTPUT);
	pinMode(ledGreen, OUTPUT);
	pinMode(ledYellow, OUTPUT);
	pinMode(ledRed, OUTPUT);
}

void loop() {
	float temp = analogRead(A0) * (5.0 / 1024.0) * 100;

	bool hot = temp >= 40;
	bool cold = temp <= 25;
	bool warm = (temp <= 35) and not cold;

	digitalWrite(baz, warm or hot);
	digitalWrite(ledRed, hot);
	digitalWrite(ledYellow, warm);
	digitalWrite(ledGreen, cold);
}