#include <LiquidCrystal.h>
LiquidCrystal miLCD(12,11,10,9,8,7);
                  //RS,E ,D4,D5,D6,D7      
void setup() {
  miLCD.begin(16,2);
}

void loop() {
  miLCD.setCursor(3,0);//columna,fila
  miLCD.print("INGENIERIA");
  miLCD.setCursor(i,1);
  miLCD.print("INFORMATICA");
  delay(200);
}