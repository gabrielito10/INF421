void setup() {
  //Colocando los pines de 2-9 como salida
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
  //Inicializando Puerto Serie
  Serial.begin(9600);  
}

void loop() {
  if (Serial.available())
  {
    char charRecibido = Serial.read();
    if ( charRecibido == 'r' || charRecibido == 'R')
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
    }
    if ( charRecibido == 'a' || charRecibido == 'A')
    {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
    }
    if ( charRecibido == 'v' || charRecibido == 'V')
    {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
    }
    if ( charRecibido == 'z' || charRecibido == 'Z')
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
    }
    if ( charRecibido == 'b' || charRecibido == 'B')
    {
      for(int i=2 ; i<=9 ; i++)
        digitalWrite(i,LOW);
    }
  }
}
