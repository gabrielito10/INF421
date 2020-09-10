void setup() {
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
}

void loop() {
  if ( digitalRead(2) == HIGH )
  {
    digitalWrite(6,20);// Pin 6 con 5v
    digitalWrite(9,0); // Pin 7 Con 0v
  }
  else if ( digitalRead(3) == HIGH)
  {
    digitalWrite(6,0);// Pin 6 con 0v
    digitalWrite(9,20); // Pin 7 Con 5v
  }
  else
  {
    digitalWrite(6,0);// Pin 6 con 0v
    digitalWrite(9,0); // Pin 7 Con 0v
  }

}
