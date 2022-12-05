int buz = 9;
int tilt = 8;

void setup () {
    pinMode(buz , OUTPUT);
    pinMode(tilt , INPUT_PULLUP);
}

void loop () {
    int tilted = digitalRead(tilt);
    digitalWrite(buz, tilted);
}