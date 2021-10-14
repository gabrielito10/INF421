
void setup() {
  pinMode(12,INPUT);
  pinMode(11,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  if (digitalRead(12) == HIGH)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  } 
  else if (digitalRead(11) == HIGH)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  else
  { 
    digitalWrite(5,LOW);
    digitalWrite(6,LOW); 
  }
 
  delay(200);
}
