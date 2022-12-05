#include <Stepper.h>

int steps = 200;
int right, left;
// attached 
Stepper stepper(steps, 8, 9, 10, 11);

void setup() {
    myStepper.setSpeed(60); 

    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
}

void loop() {
    right = !digitalRead(4);
    left = !digitalRead(5);

    if (right or left)
        myStepper.step((left)? steps*-1 : steps);
    delay(100); 
}
