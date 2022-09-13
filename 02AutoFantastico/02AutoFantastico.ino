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
  for (int i=2 ; i<=9 ; i++)
  {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    delay(100);
  }
}
