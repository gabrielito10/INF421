#include "DHT.h"

#define DHTPIN 2     
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  // Capturando la humedad
  float h = dht.readHumidity();
  // Capturando temperatura en Centigrados
  float t = dht.readTemperature();
  Serial.print("Humedad --> ");
  Serial.print(h);
  Serial.print(" % ");
  Serial.print(" ; Temperatura --> ");
  Serial.print(t);
  Serial.println("° C");

}
