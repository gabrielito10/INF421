#include <LiquidCrystal.h>
LiquidCrystal LCD (11,12,7,8,9,10);
void setup() {
 LCD.begin(16,3);
 pinMode(2,OUTPUT);
}

void loop() {
  int sensorLeido = analogRead(A3);
  LCD.setCursor(1,0);
  LCD.print("Luminosidad: ");
  LCD.print(sensorLeido);
  if (sensorLeido < 50)
    digitalWrite(3,HIGH);
  else
    digitalWrite(3,LOW);  
}
