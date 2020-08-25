#define reloj 3
#define datos 2
void setup() {
  pinMode(reloj,OUTPUT);
  pinMode(datos,OUTPUT);
  shiftOut(datos,reloj,MSBFIRST,B01011011);
}
void loop() {
   
}
