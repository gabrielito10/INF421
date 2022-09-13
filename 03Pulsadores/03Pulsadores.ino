int pausa=50;
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
  //Animando de izq a der
  for (int i=2 ; i<=9 ; i++)
  {
    digitalWrite(i,HIGH);
    delay(pausa);
    digitalWrite(i,LOW);
    delay(pausa);
  }

  //Animando de der o izq
  for ( int i=8 ; i>=3 ; i--)
  {
    digitalWrite(i,HIGH);
    delay(pausa);
    digitalWrite(i,LOW);
    delay(pausa);
  }
}
