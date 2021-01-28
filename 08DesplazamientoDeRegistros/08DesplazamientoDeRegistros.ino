void setup() {
  pinMode(2,OUTPUT); // PIN DE DATOS
  pinMode(3,OUTPUT); // PIN DEL RELOJ
}

void loop() {
  // desplazando registros
  //shiftOut(PinDeDatos,PinDelReloj,Direccion,(Bits-Decimal))
  //Direccion ---> MSBFIRTS (Most Significated bit first) ,LSBFIRST ((Least Significated bit first))
  shiftOut(2,3,MSBFIRST,B11111111);// -> 255  (B10011000) -> 8+16+128=152
  delay(1000);
  shiftOut(2,3,MSBFIRST,B00000000);
  delay(1000);
}
