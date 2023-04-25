#include <Stepper.h>

int steps = 200;
// attach
Stepper stepper(steps, 8, 9, 10, 11);

void setup() {
    myStepper.setSpeed(60);

    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(4) == HIGH) {
        myStepper.step(steps);
    } else if (digitalRead(5) == HIGH) {
        myStepper.step(steps * -1);
    }
    delay(500);
}
