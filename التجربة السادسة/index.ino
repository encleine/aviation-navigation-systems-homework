#include "pitches.h"

int melody[] = {
    NOTE_D5, 
    NOTE_D5, 
    NOTE_E5, 
    NOTE_F5, 
};
int duration = 500;

void setup () {
    for (int pin = 0; pin < 4; pin++) 
        pinMode(pin, OUTPUT);
}

void loop() {
    for (int i = 0; i < 4; i++) {
        tone(6, melody[i], duration);
        digitalWrite(i, HIGH);
        delay(1000);
        digitalWrite(i, LOW);
    }
    delay(2000);
}