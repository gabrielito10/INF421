#include <LiquidCrystal.h>
LiquidCrystal miLCD(12,11,10,9,8,7);

String readString;
char dato;

void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
  Serial.begin(9600);

  miLCD.begin(16,2);
 
}

void loop() {
   //leerCadena();
   if (Serial.available())
   {
    String datos= Serial.readString();
    datos.remove(datos.length()-1);
    Serial.print(datos);
    if (datos == "IZQUIERDA")
     {
        miLCD.setCursor(1,0);//columna,fila
        miLCD.print("Giro Izquierda");
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
        delay(3000);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
     }
     if (datos == "DERECHA")
     {
        miLCD.setCursor(1,0);//columna,fila
        miLCD.print("Giro Derecha  ");
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        delay(3000);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
     }
   }
}


//procedmiento leerCadena
void leerCadena()
{
  
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
