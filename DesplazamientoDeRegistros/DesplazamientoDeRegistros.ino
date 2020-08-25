#define reloj 3
#define datos 2
void setup() {
  pinMode(reloj,OUTPUT);
  pinMode(datos,OUTPUT);
  shiftOut(datos,reloj,MSBFIRST,B11010001);
}
void loop() {
   
}
