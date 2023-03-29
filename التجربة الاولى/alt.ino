int pin = 0;
int highlow = HIGH;
void setup() {
	for (int i = 0; i < 3; i++)
		pinMode(i, OUTPUT);
}

void loop() {
	digitalWrite(pin, highlow);
	delay(300);

	//* thanks chat gpt for this part :p 
	pin = (pin + 1) % 3;
	// *
	if (pin == 0)
		highlow ^= 1;
}
