#include <Servo.h>
Servo miServito;
void setup() {
  miServito.attach(11);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(4,INPUT);
}

void loop() {
  if ( digitalRead(2) == HIGH)
      miServito.write(0);
  if ( digitalRead(3) == HIGH)    
      miServito.write(90);
  if ( digitalRead(4) == HIGH)
      miServito.write(180);
}
