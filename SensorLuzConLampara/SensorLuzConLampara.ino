#include <LiquidCrystal.h>
LiquidCrystal LCD(12,11,10,9,8,7);
void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  LCD.begin(16,2);
}

void loop() {
  int valorLeido = analogRead(A0);
  Serial.println(valorLeido);
  if (valorLeido > 1000)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
  LCD.setCursor(5,0);
  LCD.print(valorLeido);
  LCD.print("  ");
  delay(100);
}
