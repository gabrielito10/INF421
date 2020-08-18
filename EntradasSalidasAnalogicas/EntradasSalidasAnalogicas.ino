void setup() {
  pinMode(11,OUTPUT);
}

void loop() {
   for ( int i=0 ; i<=255 ; i++)
   {
      analogWrite(11,i);
      delay(20);
   }
  /* for ( int i=254 ; i>=1 ; i--)
   {
      analogWrite(11,i);
      delay(20);
   }*/
}
