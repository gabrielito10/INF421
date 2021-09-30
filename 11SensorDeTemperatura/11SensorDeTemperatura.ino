#include <LiquidCrystal.h>
LiquidCrystal miLCD(12,11,10,9,8,7);
                  //RS,E ,D4,D5,D6,D7      
void setup() {
  miLCD.begin(16,2);
}

void loop() {
  miLCD.clear();
  int valorLeido = analogRead(A5);
  //convirtiendo a grados centigrados
  float valorConvertido = ((valorLeido / 1023.0) * 5000)/10;
  miLCD.setCursor(3,0);
  miLCD.print("Temperatura:");
  miLCD.setCursor(4,1);
  miLCD.print(valorConvertido);
  delay(200);
}
