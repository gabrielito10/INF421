void setup() {
  for(int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
}

void loop() {
  digitalWrite(2,LOW); // A
  digitalWrite(3,HIGH); // B
  digitalWrite(4,HIGH); // C
  digitalWrite(5,LOW); // D
  digitalWrite(6,LOW); // E
  digitalWrite(7,LOW); // F
  digitalWrite(8,LOW); // G
  digitalWrite(9,HIGH); // PT
  delay(1000);
  
  digitalWrite(2,HIGH); // A
  digitalWrite(3,HIGH); // B
  digitalWrite(4,LOW); // C
  digitalWrite(5,HIGH); // D
  digitalWrite(6,HIGH); // E
  digitalWrite(7,LOW); // F
  digitalWrite(8,HIGH); // G
  digitalWrite(9,HIGH); // PT

  delay(1000);
  digitalWrite(2,HIGH); // A
  digitalWrite(3,HIGH); // B
  digitalWrite(4,HIGH); // C
  digitalWrite(5,HIGH); // D
  digitalWrite(6,LOW); // E
  digitalWrite(7,LOW); // F
  digitalWrite(8,HIGH); // G
  digitalWrite(9,HIGH); // PT

  delay(1000);

  

 
}
