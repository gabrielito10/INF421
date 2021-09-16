int contador=0;

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
  //inicializando display
  for(int i=0 ; i<=7 ; i++)
     digitalWrite(i+2,numeros[contador][i]); //dibujando el numero 0
}

void loop() {
  //cuando vamos aumentando
  if ( digitalRead(10) == HIGH)
  {
    contador++;
    if ( contador > 3)
     {
        contador=0;
     }
    for(int i=0 ; i<=7 ; i++)
      digitalWrite(i+2,numeros[contador][i]); //dibujando el numero que este en el contador
  }
  delay(200);
  //cuando vamos disminuyendo
  if ( digitalRead(11) == HIGH)
  {
    contador--;
    if ( contador < 0)
     {
        contador=3;
     }
    for(int i=0 ; i<=7 ; i++)
      digitalWrite(i+2,numeros[contador][i]); //dibujando el numero que este en el contador
  }
  delay(200);
}
