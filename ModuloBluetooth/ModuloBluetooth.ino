
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("Presione 'E' para encender y 'A' para apagar");
}

void loop() {
  
  if ( Serial.available() )
  {
    char valorLeido = Serial.read();
    if ( valorLeido == 'E' )
    {
      digitalWrite(13,HIGH);
    }
    if ( valorLeido == 'A' )
    {
      digitalWrite(13,LOW);
    }
  }
}
