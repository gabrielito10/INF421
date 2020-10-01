#include <LiquidCrystal.h>
LiquidCrystal LCD(12,11,10,9,8,7);
void setup() {
  Serial.begin(9600);
  LCD.begin(16,2);
}

void loop() {
  int valorLeido = analogRead(A0);
  Serial.println(valorLeido);
  LCD.setCursor(5,0);
  LCD.print(valorLeido);
  delay(100);
}
