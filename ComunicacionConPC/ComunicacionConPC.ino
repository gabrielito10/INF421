void setup() {
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  Serial.println("TODO OK");
}

void loop() {
    if ( Serial.available()) // permite estar a la escucha de una señal
    {
      char valorLeido = Serial.read();
      if ( valorLeido == 'e' )
      {
        digitalWrite(11, HIGH);
        Serial.println("LED ENCENDIDO");
      }
      if ( valorLeido == 'a' )
      {
        digitalWrite(11, LOW);
        Serial.println("LED APAGADO");
      } 
    }
    //OTRAS FUNCIONES
}
