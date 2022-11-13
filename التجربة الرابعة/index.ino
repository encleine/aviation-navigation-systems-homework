
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

	if (temp >= 40) {
		digitalWrite(ledYellow, LOW);
		
		digitalWrite(baz, HIGH);
		digitalWrite(ledRed, HIGH);
	}
	else if (temp <= 35) {
		digitalWrite(baz, HIGH);
		digitalWrite(ledYellow, HIGH);

		digitalWrite(ledRed, LOW);
		digitalWrite(ledGreen, LOW);
	}
	else if (temp <= 25) {
		digitalWrite(baz, LOW);
		digitalWrite(ledYellow, LOW);

		digitalWrite(ledGreen, HIGH);
	}
	delay(100)
}