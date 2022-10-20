#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C miLCD(0x27,16,2);
void setup() {
  miLCD.init();
  miLCD.backlight();
}

void loop() {
     int valorLeido=analogRead(A0);
     miLCD.setCursor(2,0);
     miLCD.print("Valor --> ");
     miLCD.setCursor(13,0);
     miLCD.print(valorLeido);
     miLCD.clear();
     delay(200);
}   
