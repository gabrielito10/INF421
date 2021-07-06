#include <LiquidCrystal.h>
LiquidCrystal LCD (11,12,7,8,9,10);
void setup() {
 LCD.begin(16,2);
}

void loop() {
  int sensorLeido = analogRead(A2);
  //conviertiendo el valor a centigrados
  float x = (sensorLeido / 1023.0) * 5000;
  float valorConvertido = x / 10;
  LCD.setCursor(1,0);
  LCD.print("Temperatura: ");
  LCD.print(valorConvertido);
}
