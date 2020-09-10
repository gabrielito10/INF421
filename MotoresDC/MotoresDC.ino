void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
}

void loop() {
  if ( digitalRead(2) == HIGH )
  {
    digitalWrite(5,HIGH);// Pin 6 con 5v
    digitalWrite(6,0); // Pin 7 Con 0v
  }
  else if ( digitalRead(3) == HIGH)
  {
    digitalWrite(5,LOW);// Pin 6 con 0v
    digitalWrite(6,HIGH); // Pin 7 Con 5v
  }
  else
  {
    digitalWrite(5,LOW);// Pin 6 con 0v
    digitalWrite(6,LOW); // Pin 7 Con 0v
  }

}
