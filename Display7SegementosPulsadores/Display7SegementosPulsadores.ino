int contador=0;
void setup() {
  // Pongo los leds del 2 al 9 como salidas
  for (int i=2 ; i<=8 ; i++)
    pinMode(i,OUTPUT);
  pinMode(12,INPUT);
  pinMode(11,INPUT);  
}

void loop() {
    if ( digitalRead(12) == HIGH )
    {
      contador--;
      DibujarNumero(contador);
      if ( contador < 0)
        contador=3;
    }
    if ( digitalRead(11) == HIGH )
    {
      contador++;
      DibujarNumero(contador);
      if ( contador > 3 )
        contador=0;
    }
}
//crando la funcion para dibujar los numeros
void DibujarNumero(int valor)
{
  switch(valor)
  {
    case 0 :
      //DIBUJANDO EL NUMERO 0
      digitalWrite(8,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break;
    case 1 :
      //DIBUJANDO EL NUMERO 1
      digitalWrite(8,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      break;
    case 2 :
      //DIBUJANDO EL NUMERO 2
      digitalWrite(8,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(2,HIGH);
      break;
    case 3 :
      //DIBUJANDO EL NUMERO 3
      digitalWrite(8,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,HIGH);
      break;  
  }    
}
