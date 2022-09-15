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
    //Recibiendo la cadena
    String cadenaRecibida = Serial.readStringUntil("\n");
    //Elimando el ultimo caracter
    cadenaRecibida = cadenaRecibida.substring(0,cadenaRecibida.length() - 1);

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
  }
}
