#include <Servo.h>
Servo miServito;
void setup() {
  miServito.attach(3);
  miServito.write(90);
  pinMode(12,INPUT);
  pinMode(11,INPUT);
  pinMode(10,INPUT);
}

void loop() {
  if (digitalRead(12) == HIGH)
    miServito.write(0);
  if (digitalRead(11) == HIGH)
    miServito.write(90);
  if (digitalRead(10) == HIGH)
    miServito.write(179);
  delay(200);
}
