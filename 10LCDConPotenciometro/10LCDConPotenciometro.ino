#include <LiquidCrystal.h>
LiquidCrystal miLCD(12,11,10,9,8,7);
                  //RS,E ,D4,D5,D6,D7      
void setup() {
  miLCD.begin(16,2);
}

void loop() {
  miLCD.clear();
  int valorLeido = analogRead(A0);
  miLCD.setCursor(3,0);
  miLCD.print("Valor leido:");
  miLCD.setCursor(6,1);
  miLCD.print(valorLeido);
  delay(200);
}
