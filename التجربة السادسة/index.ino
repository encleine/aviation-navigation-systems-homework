#include "pitches.h"

int melody[] = {
    NOTE_D5, 
    NOTE_D5, 
    NOTE_E5, 
    NOTE_F5, 
    NOTE_G5, 
    NOTE_A5, 
    NOTE_B5, 
    NOTE_C6,
    NOTE_D6,
    NOTE_E6
};

void setup () {
    for (int pin = 0; pin < 10; pin++) 
        pinMode(pin, OUTPUT);
}

void loop() {
    for (int i = 0; i < 10; i++) {
        tone(6, melody[i], duration);
        digitalWrite(i, HIGH);
        delay(1000);
        digitalWrite(i, LOW);
    }
    delay(2000);
}