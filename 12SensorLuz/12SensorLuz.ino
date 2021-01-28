#include <LiquidCrystal.h>
LiquidCrystal miLCD(2,3,14,15,16,17); //rs,e,d4,d5,d6,d7
void setup() {
  Serial.begin(9600);
  miLCD.begin(16,2);
}

void loop() {
  int valorLeido = analogRead(A4); //0-1023 
  int valorConvertido = map(valorLeido,0,1023,100,0);
  miLCD.setCursor(1,0);
  miLCD.print("Luminosidad ");
  miLCD.print(valorConvertido);
  miLCD.print("% ");
  //Serial.println(valorConvertido);
  delay(200);
}
