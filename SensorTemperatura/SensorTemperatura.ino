//libreria para trabajar con LCD
#include <LiquidCrystal.h>
int pinAnalogo = A0;
LiquidCrystal miLCD(11,10,7,6,5,4); // RS,E,D4,D5,D6,D7
void setup() {
  miLCD.begin(16,2);
}
void loop() {
  int valorLeido=analogRead(pinAnalogo); // 0 - 1023
  float valorCentigrados = (valorLeido * 5.0) * 100.0 / 1023.0;
  miLCD.setCursor(0,0);
  miLCD.print("TEMPERATURA ");
  miLCD.setCursor(13,0);
  miLCD.print(valorCentigrados);  
}
