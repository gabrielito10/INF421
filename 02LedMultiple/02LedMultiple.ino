void setup() {
  /*pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);*/
  for( int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
}

void loop() {
  /*digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);*/
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
