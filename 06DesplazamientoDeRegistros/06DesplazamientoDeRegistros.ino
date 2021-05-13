int tiempo=200;
void setup() {
  pinMode(2,OUTPUT); // PIN DE DATOS
  pinMode(3,OUTPUT); // PIN POR DONDE SE ENVIARA EL RELOJ DE ARDUINO
}

void loop() {
  // PARA DESPLZAZAR REGISTROS
  // shiftOut(pinDeDatos,pinDelReloj, Direccion, (Bits-decimal))
  // Direccion MSBFIRTS (Most Significates bit first), LSBFIRTS (Least Significates bit first)
  shiftOut(2,3,LSBFIRST,B00001111); //255 Decimal
  delay(tiempo);
  shiftOut(2,3,LSBFIRST,B11110000); //255 Decimal
  delay(tiempo);
}
