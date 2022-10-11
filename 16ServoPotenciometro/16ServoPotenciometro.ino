#include <Servo.h>
Servo miServo;
void setup() {
  miServo.attach(9);
  miServo.write(90);
}

void loop() {
     int valorLeido=analogRead(A1);
     int valorConvertido=map(valorLeido, 0, 1023, 0, 180);
     miServo.write(valorConvertido);
     delay(100); 
}   
