int retraso=30;
void setup() {
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
}

void loop() {
  for (int i=2 ; i<=9 ; i++)
  {
    digitalWrite(i,HIGH);
    delay(retraso);
    digitalWrite(i,LOW);
    delay(retraso);
  }
  for (int i=8 ; i>=3 ; i--)
  {
    digitalWrite(i,HIGH);
    delay(retraso);
    digitalWrite(i,LOW);
    delay(retraso);
  }  
}
