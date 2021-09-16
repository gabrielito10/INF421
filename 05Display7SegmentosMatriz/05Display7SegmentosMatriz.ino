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
}

void loop() {
   for(int i=0 ; i<=7 ; i++)
     digitalWrite(i+2,numeros[1][i]); //dibujando el numero 1
   delay(1000);
      
   for(int i=0 ; i<=7 ; i++)
     digitalWrite(i+2,numeros[4][i]); // borrando
   delay(1000);
  
   for(int i=0 ; i<=7 ; i++)
     digitalWrite(i+2,numeros[3][i]); //dibujando el numero 3
   delay(1000);
   
   for(int i=0 ; i<=7 ; i++)
     digitalWrite(i+2,numeros[4][i]); // borrando
   delay(1000);
}
