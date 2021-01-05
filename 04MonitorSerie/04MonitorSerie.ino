void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
 //recibir una señal de la PC
 //poniendo en espera arduino
 if ( Serial.available() )
 {
    char valorRecibido = Serial.read();
    if ( valorRecibido == 'E' )
    {
      Serial.println("UD. digito la 'E'");
      digitalWrite(13,HIGH);
    }
    if ( valorRecibido == 'A' )
    {
      Serial.println("UD. digito la 'A'");
      digitalWrite(13,LOW);
    }      
 }
}
