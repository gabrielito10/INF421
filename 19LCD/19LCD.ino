#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C miLCD(0x27,16,2);
void setup() {
  miLCD.init();
  miLCD.backlight();
  miLCD.setCursor(3,0);
  miLCD.print("INGENIERIA");
  miLCD.setCursor(3,1);
  miLCD.print("INFORMATICA");
}

void loop() {
     for (int i=17 ; i>=-11 ; i--)
     {
        miLCD.clear();
        miLCD.setCursor(i,0);
        miLCD.print("INFORMATICA");
        delay(500);
     }
}   
