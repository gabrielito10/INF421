int retraso=30;
void setup() {
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  /*digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);*/

  delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  delay(1000);
}
