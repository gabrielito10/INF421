void setup() {
  pinMode(4,OUTPUT);
  pinMode(10,INPUT);
  digitalWrite(4,HIGH); //depende del rele
}
void loop() {
    if ( digitalRead(10)== LOW )
      digitalWrite(4,LOW); //Depende del rele
    else
      digitalWrite(4,HIGH); //Depende del rele  
}
