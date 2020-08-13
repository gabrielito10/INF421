void setup() {
  // Pongo los leds del 2 al 9 como salidas
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
  //pongo el pin 12
  pinMode(12,INPUT); 
  pinMode(11,INPUT);  
}

void loop() {
  if (digitalRead(12) == HIGH)
      digitalWrite(9,HIGH);
  else
      digitalWrite(9,LOW); 
//EL SEGUNDO PULSADOR
  if (digitalRead(11) == HIGH)
      digitalWrite(2,HIGH);
  else
      digitalWrite(2,LOW);        
}
