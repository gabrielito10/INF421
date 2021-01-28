#include <LiquidCrystal.h>

 LiquidCrystal miLCD(2,3,14,15,16,17);  //2,3,A0,A1,A2,A3
                  //RS,E,D4,D5,D6,D7
void setup() {
  miLCD.begin(16,2);
}

void loop() {
  miLCD.setCursor(3,0); //COLUMNA,FILA
  miLCD.print("INGENIERIA   ");
  miLCD.setCursor(3,1);
  miLCD.print("INFORMATICA  ");
}
