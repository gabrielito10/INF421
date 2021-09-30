#include "DHT.h"
#include <LiquidCrystal.h>
LiquidCrystal miLCD(12,11,10,9,8,7);
                  //RS,E ,D4,D5,D6,D7   

#define DHTPIN 2  
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  miLCD.begin(16,2);
  dht.begin();
}

void loop() {
  delay(200);
  // leendo Humedad
  float h = dht.readHumidity();
  // leendo Temperatura
  float t = dht.readTemperature();

  miLCD.setCursor(0,0);
  miLCD.print("Humedad: ");
  miLCD.print(h);
  miLCD.setCursor(0,1);
  miLCD.print("Temperatura: ");
  miLCD.println(t);
}
