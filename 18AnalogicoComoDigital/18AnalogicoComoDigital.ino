#include <LiquidCrystal.h>
LiquidCrystal miLCD(12,11,14,15,16,17);
                  //RS,E ,D4,D5,D6,D7      
void setup() {
  miLCD.begin(16,2);
}

void loop() {
  miLCD.setCursor(3,0);//columna,fila
  miLCD.print("INGENIERIA");
  miLCD.setCursor(3,1);
  miLCD.print("INFORMATICA");
  delay(200);
}
