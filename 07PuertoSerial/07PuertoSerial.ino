int numeros[5][8] = 
{
  {1,1,1,1,1,1,0,1}, //0
  {0,1,1,0,0,0,0,1}, //1
  {1,1,0,1,1,0,1,1}, //2
  {1,1,1,1,0,0,1,1}, //3
  {0,0,0,0,0,0,0,0} //APAGADO
};
void setup() {
  for(int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
  //Inicializando puerto serial
  Serial.begin(9600);
}

void loop() {
  //Poniendo arduino en modo escucha
  if (Serial.available())
  {
    char x = Serial.read();
    if ( x == '1')
    {
      for ( int i=0; i<=7 ; i++)
        digitalWrite(i+2,numeros[1][i]);// dibuje el 1

      //enviando mensaje a la computadora
      Serial.println("Ud. Digito el numero 1");    
    }
    if ( x == '2')
    {
      for ( int i=0; i<=7 ; i++)
        digitalWrite(i+2,numeros[2][i]);// dibuje el 2
      //enviando mensaje a la computadora
      Serial.println("Ud. Digito el 2");
    }
    delay(200);
  }
}
