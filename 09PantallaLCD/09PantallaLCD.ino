#include <LiquidCrystal.h>
LiquidCrystal miLCD(11,12,7,8,9,10);
                  //RS,E ,D4,D5,D6,D7      
void setup() {
  miLCD.begin(16,2);
}

void loop() {
  miLCD.setCursor(3,0);//columna,fila
  miLCD.write("INGENIERIA");
  miLCD.setCursor(2,1);
  miLCD.write("INFORMATICA");
  delay(200);
}
