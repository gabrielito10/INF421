String mensajeLeido="";
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  LeerMensaje();
  if ( mensajeLeido == "ON_RED" )
    digitalWrite(2,HIGH);
  if ( mensajeLeido == "OFF_RED" )
    digitalWrite(2,LOW);  
  mensajeLeido = "";
}

// FUNCION PARA LEER UNA CADENA CARCATER POR CARACTER
void LeerMensaje()
{
  while( Serial.available() )
  {
    if ( Serial.available() )
    {
      char caracterLeido = Serial.read();
      mensajeLeido += caracterLeido;
    }
  }
}
