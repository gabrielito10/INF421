void setup() {
  // Pongo los leds del 2 al 9 como salidas
  for (int i=2 ; i<=8 ; i++)
    pinMode(i,OUTPUT);
}

void loop() {
    //DIBUJANDO EL NUMERO 0
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
    delay(1000);
    //DIBUJANDO EL NUMERO 1
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    delay(1000);
    //DIBUJANDO EL NUMERO 2
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(1000);
    //DIBUJANDO EL NUMERO 3
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(1000);
}
