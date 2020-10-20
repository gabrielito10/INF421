String mensajeLeido="";
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
 }

void loop() {
  LeerMensaje();
  if (mensajeLeido == "onRojo")
    digitalWrite(9,HIGH);
  if (mensajeLeido == "offRojo")
    digitalWrite(9,LOW);
  if (mensajeLeido == "onVerde")
    digitalWrite(10,HIGH);
  if (mensajeLeido == "offVerde")
    digitalWrite(10,LOW);
  mensajeLeido="";  
}
void LeerMensaje()
{
  while(Serial.available())
  {
    if (Serial.available())
    {
      char charLeido=Serial.read();
      mensajeLeido+=charLeido;
    }
  }
}
