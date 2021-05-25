//Display de 7 segementos
//   pt,g,f,e,d,c,b,a
//    0,1,0,0,1,1,1,1
void setup() {
  for (int i=2;i<=8;i++)
    pinMode(i,OUTPUT);
}
void loop() {
  digitalWrite(8,HIGH); //a
  digitalWrite(7,HIGH); //b
  digitalWrite(6,HIGH); //c
  digitalWrite(5,HIGH); //d
  digitalWrite(4,LOW); //e
  digitalWrite(3,LOW); //f
  digitalWrite(2,HIGH); //g
  delay(1000);
  digitalWrite(2,LOW); //a
  digitalWrite(3,LOW); //b
  digitalWrite(4,LOW); //c
  digitalWrite(5,LOW); //d
  digitalWrite(6,LOW); //e
  digitalWrite(7,LOW); //f
  digitalWrite(8,LOW); //g
  delay(1000);
}
