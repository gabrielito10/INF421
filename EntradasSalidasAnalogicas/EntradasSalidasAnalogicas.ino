void setup() {
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT); //NO ES NECESARIO
}

void loop() {
   int valorAnalogico = analogRead(A0);
   //int nuevoValor = (valorAnalogico * 255)/1023; //conversion de 1023 a 255
   //conversion a traves del comando map
   //map(valor a convertir,MinEntrada,MaxEntrada,MinSalida,MaxSalida);
   int NuevoValorMAP = map(valorAnalogico,0,1023,0,255);
   analogWrite(11,NuevoValorMAP);
}
