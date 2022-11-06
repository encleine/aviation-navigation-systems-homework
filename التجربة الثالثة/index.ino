

int led = 9;
void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int ADCin = analogRead(A0);
    int ADCout = map(ADCin ,0,1023,0,255);
    if (ADCin > 650)
        analogWrite(led, ADCout);
}

