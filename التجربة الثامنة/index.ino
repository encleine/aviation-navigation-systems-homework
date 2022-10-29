
#include <Servo.h>
Servo myservo;
int isPushed;
int push = 4;

void setup () {
    pinMode(push, INPUT_PULLUP);
    myservo.attach(9);
}
void loop() {
    isPushed = digitalRead(push);

    myservo.write((isPushed)? 90 : 180);
    delay(150);
}