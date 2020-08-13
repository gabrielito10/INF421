void setup() {
  // Pongo los leds del 2 al 9 como salidas
  for (int i=2 ; i<=8 ; i++)
    pinMode(i,OUTPUT);
}

void loop() {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
}
