// PUERTO SERIAL

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  //Serial.println("Hola");
  //delay(500);
  //espera a arduino
  if ( Serial.available() )
  {
    char caracterRecibido = Serial.read();
    if (caracterRecibido == 'A')
    {
      digitalWrite(13,LOW);
    }
    if (caracterRecibido == 'E')
    {
      digitalWrite(13,HIGH);
    }
  }
}
