String readString;
char dato;

void setup() {
  for (int i=2;i<=9;i++)
    pinMode(i,OUTPUT);
  Serial.begin(9600);
}

void loop() {
   leerCadena();
   if ( readString.length() > 0 )
   {
     readString.remove(readString.length()-1);
     Serial.print("*"); 
     Serial.print(readString);
     Serial.println("*");
   }
  
  /*if (Serial.available())
  {
    char x = Serial.read();
    //ROJO
    if ( x == '1')
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);    
    }
    if ( x == '2')
    {
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);    
    }
    //AMARILLO
    if ( x == '3')
    {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);    
    }
    if ( x == '4')
    {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);    
    }
    //VERDE
     if ( x == '5')
    {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);    
    }
    if ( x == '6')
    {
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);    
    }
    //AZUL
    if ( x == '7')
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);    
    }
    if ( x == '8')
    {
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);    
    }
    delay(200);
  }*/
}


//procedmiento leerCadena
void leerCadena()
{
  readString="";
  //poner en modo escucha a arduino
  while(Serial.available())
  {
    delay(10);
    if (Serial.available()>0)
    {
      dato=Serial.read();
      readString += dato;
    }
  }
}
