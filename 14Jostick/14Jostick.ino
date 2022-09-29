void setup() {
  Serial.begin(9600);
}

void loop() {
  int x = analogRead(A2);
  int y = analogRead(A3);
  if ( (x>500 && x<550) && (y>500 && y<550))
    Serial.println("CENTRO");
  else
  {
    if ( x<50)
      Serial.println("IZQUIERDA");
    if ( x>950)
      Serial.println("DERECHA");
    if ( y<50)
      Serial.println("ABAJO");
    if ( y>950)
      Serial.println("ARRIBA");      
    delay(200);
  }   
}
