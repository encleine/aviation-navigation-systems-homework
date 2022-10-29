
#include <Stepper.h>


int steps = 200;  
int right, left;
// attached to
Stepper stepper(steps, 8, 9, 10, 11);



void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  //set the led pins
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop()
{
    // inverts their values to make them easier to work with
    right = !digitalRead(4);
    left = !digitalRead(5);

    if (right || left)
        myStepper.step((left)? steps*-1 : steps);
    delay(100); 
}
