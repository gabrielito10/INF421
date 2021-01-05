void setup() {
  for(int i=2;i<=9;i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}

void loop() {
  if (digitalRead(10) == HIGH)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
  }
  ///otros dos leds
  if (digitalRead(11) == HIGH)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
  }
  else
  {
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  // otros dos leds
  if (digitalRead(12) == HIGH)
  {
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
}
