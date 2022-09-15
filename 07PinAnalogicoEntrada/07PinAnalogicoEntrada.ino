void setup() {
  //Colocando los pines de 2-9 como salida
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
  //Inicializando Puerto Serie
  Serial.begin(9600); 
}

void loop() {
  int valorRecibido = analogRead(A5);
  Serial.println(valorRecibido);
  delay(200);
}
