void setup() {
  //Iniciando Puerto Serie
  Serial.begin(9600);
}
void loop() {
  int valorLeido = analogRead(A0);
  int valorConvertido = map(valorLeido, 0, 1023, 100, 0);
  Serial.print("Luminosidad -> ");
  Serial.print(valorConvertido);
  Serial.println(" %");
  delay(250);
}
