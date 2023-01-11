int led = 9;
void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
	float ADCin = analogRead(A0);

	if (ADCin > 650)
		digitalWrite(led, HIGH);
	else
		digitalWrite(led, LOW);
}
