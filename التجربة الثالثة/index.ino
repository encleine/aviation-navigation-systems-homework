

int led =11;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int ADCin_value = analogRead(A0);
    digitalWrite(led, ADCin_value > 650);
}

