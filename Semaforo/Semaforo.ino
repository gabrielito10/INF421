//DEFINICION DE DISPOSITIVOS
#define ledR_Izq 13
#define ledA_Izq 12
#define ledV_Izq 11

#define ledR_Der 10
#define ledA_Der 9
#define ledV_Der 8
void setup() {
  pinMode(ledR_Izq,OUTPUT);
  pinMode(ledA_Izq,OUTPUT);
  pinMode(ledV_Izq,OUTPUT);

  pinMode(ledR_Der,OUTPUT);
  pinMode(ledA_Der,OUTPUT);
  pinMode(ledV_Der,OUTPUT);

  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop() {
   //PRIMERA INSTANCIA
   digitalWrite(ledR_Izq,HIGH);
   digitalWrite(ledV_Der,HIGH);
   for (int i=5 ; i>=1 ; i--)
   {
    DibujarNumero(i);
    delay(500);
   }
   digitalWrite(ledR_Izq,LOW);
   digitalWrite(ledV_Der,LOW);
   
   //SEGUNDA INSTANCIA
   digitalWrite(ledA_Izq,HIGH);
   digitalWrite(ledA_Der,HIGH);
   for (int i=2 ; i>=1 ; i--)
   {
    DibujarNumero(i);
    delay(500);
   }
   digitalWrite(ledA_Izq,LOW);
   digitalWrite(ledA_Der,LOW);

   //TERCERA INSTANCIA
   digitalWrite(ledV_Izq,HIGH);
   digitalWrite(ledR_Der,HIGH);
   for (int i=5 ; i>=1 ; i--)
   {
    DibujarNumero(i);
    delay(500);
   }
   digitalWrite(ledV_Izq,LOW);
   digitalWrite(ledR_Der,LOW);

  //CUARTA INSTANCIA
   digitalWrite(ledA_Izq,HIGH);
   digitalWrite(ledA_Der,HIGH);
   for (int i=2 ; i>=1 ; i--)
   {
    DibujarNumero(i);
    delay(500);
   }
   digitalWrite(ledA_Izq,LOW);
   digitalWrite(ledA_Der,LOW);
}

//FUNCION PARA DIBUJAR NUMEROS
void DibujarNumero(int valor)
{
  switch(valor)
  {
    case 1 :
      //DIBUJANDO EL NUMERO 1
      digitalWrite(7,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      digitalWrite(1,LOW);
      break;
    case 2 :
      //DIBUJANDO EL NUMERO 2
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(1,HIGH);
      break;
    case 3 :
      //DIBUJANDO EL NUMERO 3
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      digitalWrite(1,HIGH);
      break;  
     case 4 :
      //DIBUJANDO EL NUMERO 4
      digitalWrite(7,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(1,HIGH);
      break;  
     case 5 :
      //DIBUJANDO EL NUMERO 5
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(1,HIGH);
      break;    
  }  
  delay(500);  
}
