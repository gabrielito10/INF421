void setup() {
  pinMode(2,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorLeido = analogRead(A0);
  int valorConvertido = map(valorLeido,0,1023,0,255);
  Serial.print("Valor de Entrada --> ");
  Serial.print(valorLeido);
  Serial.print("     Valor de Salida --> ");
  Serial.println(valorConvertido);
  delay(500);
  //asignando valores analogicos a los leds
  analogWrite(2,valorConvertido);
  analogWrite(9,valorConvertido);
}
