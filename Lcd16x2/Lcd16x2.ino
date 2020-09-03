//libreria para trabajar con LCD
#include <LiquidCrystal.h>

LiquidCrystal miLCD(11,10,7,6,5,4); // RS,E,D4,D5,D6,D7
void setup() {
  miLCD.begin(16,2);
}
void loop() {
   /*miLCD.setCursor(3,0); //columna,fila
   miLCD.print("INGENIERIA");
   miLCD.setCursor(2,1);
   miLCD.print("INFORMATICA");
   delay(1000);
   miLCD.clear(); //limpiar LCD
   delay(1000);*/

   /*for (int i=16 ; i>-9 ; i--)
   {
      miLCD.setCursor(i,0);
      miLCD.print("INFORMATICA");
      delay(50);
      miLCD.clear();
   } */ 

   for (int i=0 ; i>-18 ; i--)
   {
      miLCD.setCursor(i,0);
      miLCD.print("CARRERA DE INGENIERIA INFORMATICA");
      delay(200);
   }
   miLCD.clear();
   delay(200);
}
