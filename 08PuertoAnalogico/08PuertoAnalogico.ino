void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}

void loop() {
  //Leer el valor analogico de A0
  int valorLeido = analogRead(A0);
  Serial.print(valorLeido);
  //Valor Leido 0 - 1023
  //Valor de salida 0 - 255
  // 1023 -> 255
  // 728  -> x
  //int valorSalida=(valorLeido*255)/1023;
  int valorSalida=map(valorLeido,0,1023,0,255);
  analogWrite(6,valorSalida);
  Serial.print(" -> ");
  Serial.println(valorSalida);
  delay(200);
}
