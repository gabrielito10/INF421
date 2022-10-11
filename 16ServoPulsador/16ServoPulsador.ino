#include <Servo.h>
Servo miServo;
void setup() {
  miServo.attach(9);
  miServo.write(90);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}

void loop() {
     if ( digitalRead(10) == LOW )
        miServo.write(0);
     if ( digitalRead(11) == LOW )
        miServo.write(90);
     if ( digitalRead(12) == LOW )
        miServo.write(180);   
}   
