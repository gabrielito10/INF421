void setup() {
  pinMode(2,OUTPUT); //PIN DE DATOS
  pinMode(3,OUTPUT); //PIN DE RELOJ
}

void loop() {
  //shiftOut( PinDeDatos, PinDelReloj, Direccion , (Bits-Decimal-Binario-Hexadecimal))
  //Direccion ---> MSBFIRST ,LSBFIRST  
  shiftOut(2,3,MSBFIRST,B01001001);
  delay(1000);
  shiftOut(2,3,MSBFIRST,B00000000);
  delay(1000);
}
