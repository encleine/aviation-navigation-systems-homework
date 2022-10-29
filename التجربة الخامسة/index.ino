int baz = 9;
int tilt = 8;

void setup () {
    pinMode(baz , OUTPUT);
    pinMode(tilt , INPUT_PULLUP);
}

void loop () {
    val = digitalRead(tilt);
    digitalWrite(baz, val);
}
