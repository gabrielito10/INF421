#include <LiquidCrystal.h>
LiquidCrystal LCD(7,6,5,4,3,2);
void setup() {
  LCD.begin(16,2);

}

void loop() {
  LCD.setCursor(3,0);
  LCD.print("INGENIERIA");
  //int i=0;
  for (int i=15 ; i>=0 ; i--);
  {
    LCD.setCursor(i,1);
    LCD.print("INFORMATICA");
    delay(1000);
  //  LCD.clear();
  }
}
