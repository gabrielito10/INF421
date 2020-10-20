
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
 }

void loop() {
  
  if ( Serial.available() )
  {
    char valorLeido = Serial.read();
    if ( valorLeido == '0' ) //encienda el led rojo
    {
      digitalWrite(9,HIGH);
    }
    if ( valorLeido == '1' ) //apague el led rojo
    {
      digitalWrite(9,LOW);
    }
    if ( valorLeido == '2' ) //enciende el led verde
    {
      digitalWrite(10,HIGH);
    }
    if ( valorLeido == '3' ) //apaga el led verde
    {
      digitalWrite(10,LOW);
    }
  }
}
