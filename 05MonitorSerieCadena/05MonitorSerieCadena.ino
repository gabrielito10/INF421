String readString ;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  LeerMensaje();
  delay(50);
  if ( readString == "ON_RED" )
  {
    digitalWrite(2,HIGH);
  }
  if ( readString == "OFF_RED" )
  {
    digitalWrite(2,LOW);
  }  
  readString = "";
}

// FUNCION PARA LEER UNA CADENA CARCATER POR CARACTER
void LeerMensaje()
{
  while( Serial.available() )
  {
    if ( Serial.available() )
    {
      char caracterLeido = Serial.read();
      if ( caracterLeido != '\n' )
        readString += caracterLeido;
    }
  }
}
