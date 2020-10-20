#include <DHT.h>
#include <LiquidCrystal.h>
#define DHTPIN 2
#define DHTTYPE DHT11
LiquidCrystal lcd(12,11,10,9,8,7);
DHT miSensor(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  miSensor.begin();
  lcd.begin(16,2);
}

void loop() {
  float Hum = miSensor.readHumidity();
  float Tem = miSensor.readTemperature();
  lcd.setCursor(2,0);
  lcd.print("Tem= ");
  lcd.print(Tem);
  lcd.print(" °C");
  lcd.setCursor(2,1);
  lcd.print("Hum= ");
  lcd.print(Hum);
  lcd.print(" %");
}
