void setup() {
  //Colocando los pines de 2-9 como salida
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);

  //Colocando los pines 10,11,12 como entrada
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);  
}

void loop() {
  //Verificando Pulsador pin 10
  if ( digitalRead(10) == HIGH )
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);  
  }
  else
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);  
  }
}
