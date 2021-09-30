#include <LiquidCrystal.h>
LiquidCrystal miLCD(12,11,10,9,8,7);
                  //RS,E ,D4,D5,D6,D7      
void setup() {
  miLCD.begin(16,2);
}

void loop() {
  miLCD.clear();
  int valorLeido = analogRead(A1);
  //convietiendo a 0 y 100%
  //int valorPorcentaje = map(valorLeido,0,1023,0,100);

  //volteando los valores de salida
  int valorPorcentaje = map(valorLeido,0,1023,100,0);
  miLCD.setCursor(3,0);
  miLCD.print("Luminosidad:");
  miLCD.setCursor(4,1);
  miLCD.print(valorPorcentaje);
  delay(200);
}
