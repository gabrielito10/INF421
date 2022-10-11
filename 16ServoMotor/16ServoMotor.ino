#include <Servo.h>
Servo miServo;
void setup() {
  miServo.attach(9);
  miServo.write(90);
}

void loop() {
  miServo.write(0);
  delay(1000);
  miServo.write(180);
  delay(1000);
  miServo.write(90);
  delay(1000);   
}
