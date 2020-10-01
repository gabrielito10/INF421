#include <LiquidCrystal.h>
LiquidCrystal LCD(12,11,10,9,8,7);
void setup() {
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  LCD.begin(16,2);
}

void loop() {
  int valorLeido = analogRead(A0);
  Serial.println(valorLeido);
  LCD.setCursor(5,0);
  LCD.print(valorLeido);
  LCD.print("  ");
  delay(100);
}
