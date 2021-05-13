void setup() {
 Serial.begin(115200);
}

void loop() {
  int valorLeido = analogRead(A0); // ---> 0 -1023
  Serial.println(valorLeido);
  int valorConvertido = map(valorLeido,0,1023,0,255);
  analogWrite(11,valorConvertido);
  delay(500);
}
