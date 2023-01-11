
int sw1;
int sw2;

void setup() {
    // switches
    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLUP);
    //led
    pinMode(2, OUTPUT);
}

void loop() {
	sw1 = digitalRead(0);
	sw2 = digitalRead(1);

    if (sw1==0) 
        digitalWrite(2, HIGH);

    else if (sw2==0)
        digitalWrite(2, LOW);
} 
