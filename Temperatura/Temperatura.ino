#include <LiquidCrystal.h>
LiquidCrystal LCD(12,11,10,9,8,7);
void setup() {
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  LCD.begin(16,2);
}

void loop() {
  int valorLeido = analogRead(A0);
  Serial.println(valorLeido);

  //conversion del valor leido a °C
  int temperatura=(valorLeido/1024.0)*500;
  LCD.setCursor(5,0);
  LCD.print(temperatura);
  if (temperatura > 37)
  {
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
  }
  else
  {
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
  }
  delay(100);
}
