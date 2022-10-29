
int baz=6;
int ledGreen=7;
int ledYellow=8;
int ledRed=9;

float geTemp(int x) {
	float Vin = x * ( 5.0 / 1024.0);
	return Vin * 100;
}

void setup()
{
	pinMode(baz, OUTPUT);

	pinMode(ledGreen, OUTPUT);
	pinMode(ledYellow, OUTPUT);
	pinMode(ledRed, OUTPUT);

	Serial.begin(9600);
}

void loop()
{
	float temp = geTemp(analogRead(A0))

	digitalWrite(ledRed, temp >= 40);
	digitalWrite(ledYellow, (temp > 25) && (temp <= 35));
	digitalWrite(ledGreen, temp <= 25);

	digitalWrite(baz, temp > 25);
}