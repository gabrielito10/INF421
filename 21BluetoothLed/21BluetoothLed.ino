void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Poniendo arduino en modo escucha
  if (Serial.available())
  {
    char x = Serial.read();
    if ( x == '1')
    {
      digitalWrite(13,HIGH);    
    }
    if ( x == '2')
    {
      digitalWrite(13,LOW);
    }
    delay(200);
  }
}
