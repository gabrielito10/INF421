void setup() {
  pinMode(2,OUTPUT); //PIN DE DATOS
  pinMode(3,OUTPUT); //PIN DE RELOJ
}

void loop() {
  //shiftOut( PinDeDatos, PinDelReloj, Direccion , (Bits-Decimal-Binario-Hexadecimal))
  //Direccion ---> MSBFIRST ,LSBFIRST  
  shiftOut(2,3,LSBFIRST,B01000000);
  delay(5000);
  shiftOut(2,3,LSBFIRST,B10000000);
  delay(5000);
}
