void setup() {
  for (int i=2 ; i<=9 ; i++)
      pinMode(i,OUTPUT);
}

void loop() {
  for (  int i=2 ; i <=9 ; i++)
  {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    delay(100);
  }
  for (  int i=8 ; i >=3 ; i--)
  {
    digitalWrite(i,HIGH);
    delay(20);
    digitalWrite(i,LOW);
    delay(20);
  }
}
