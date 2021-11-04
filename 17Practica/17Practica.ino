#include <LiquidCrystal.h>
#include "DHT.h"

#define DHTPIN 2  
#define DHTTYPE DHT11   // DHT 11
LiquidCrystal miLCD(12,11,10,9,8,7);
                  //RS,E ,D4,D5,D6,D7   

DHT dht(DHTPIN, DHTTYPE);
void setup() {
  miLCD.begin(16,2);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  miLCD.setCursor(1,0);//columna,fila
  if ( t <=5 )
  {
    miLCD.print("FRIO        ");
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  if ( t > 5 && t <= 15)
  {
    miLCD.print("TEMPLADO    ");
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  if ( t > 15 && t <= 25)
  {
    miLCD.print("CALIENTE    ");
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  if ( t > 25 )
  {
    miLCD.print("MUY CALIENTE");
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
   delay(200);
}
