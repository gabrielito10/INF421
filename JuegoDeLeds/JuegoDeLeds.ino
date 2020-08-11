void setup() {
  // put your setup code here, to run once:
  for (int i=2 ; i<=9 ; i++)
    pinMode(i,OUTPUT);
  /*pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);*/
}

void loop() {
  for (int i=2 ; i<=9 ; i++)
    digitalWrite(i,HIGH);
  delay(1000); //pausa en milisegundos    
  for (int i=2 ; i<=9 ; i++)
    digitalWrite(i,LOW);
  delay(1000); //pausa en milisegundos  
  /*digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);*/  
}
