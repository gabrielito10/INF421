String cadenaRecibida = "";
void setup() {
  //Colocando los pines de 2-9 como salida
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
  //Inicializando Puerto Serie
  Serial.begin(9600);  
}

void loop() {
  while ( Serial.available() > 0)
  {
    char charRecibido = Serial.read();
    if ( charRecibido != '\n' )
      cadenaRecibida.concat(charRecibido);
    else
    {
        if ( cadenaRecibida == "ledOn" )
        {
          for ( int i=2 ; i<=9 ; i++)
            digitalWrite(i,HIGH);
        }
        if ( cadenaRecibida == "ledOff" )
        {
          for ( int i=2 ; i<=9 ; i++)
             digitalWrite(i,LOW);
        }
      //limpiando la variable
      cadenaRecibida = "";
    }
  }
}
