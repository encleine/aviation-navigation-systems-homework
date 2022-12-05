
void setup() {
    // switches
    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLUP);
    //led
    pinMode(2, OUTPUT);
}

void loop() {
    //! inverts the value so it's only true if it's zero
    if (!digitalRead(0))
        digitalWrite(2, HIGH);
    else if (!digitalRead(1))
        digitalWrite(2, LOW);
} 