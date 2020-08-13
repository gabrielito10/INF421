void setup() {
  // put your setup code here, to run once:
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
}

void loop() {
  for (int i=2 ; i<=9 ; i++)
  {
    digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
    delay(50);
  }
  for (int i=8 ; i>=3 ; i--)
  {
    digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
    delay(50);
  }
}
