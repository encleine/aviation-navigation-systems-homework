
int highlow = HIGH;

void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
}

void loop() {
    for (int pin = 0; pin < 3; pin++) {
        digitalWrite(pin, highlow);
        delay(300);
    }
    highlow = !highlow;
}