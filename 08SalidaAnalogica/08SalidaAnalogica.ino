void setup() {
  //Colocando los pines de 2-9 como salida
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
  //Inicializando Puerto Serie
  Serial.begin(9600); 
}

void loop() {
  int valorLeido = analogRead(A0);
  int valorConvertido=map(valorLeido, 0, 1023, 0, 255);
  Serial.print(valorLeido);
  Serial.print(" ---> ");
  Serial.println(valorConvertido);
  analogWrite(3,valorConvertido);
  analogWrite(5,valorConvertido);
  analogWrite(6,valorConvertido);
  delay(200);
}
