#include "DHT.h"
#include <LiquidCrystal.h>
LiquidCrystal LCD (11,12,7,8,9,10);

#define DHTPIN 2     
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  LCD.begin(16,2);
  dht.begin();
}

void loop() {
  delay(500);

  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  
  LCD.setCursor(0,0);
  LCD.print("Temperatura: ");
  LCD.print(t);

  LCD.setCursor(0,1);
  LCD.print("Humedad: ");
  LCD.print(h);
}
