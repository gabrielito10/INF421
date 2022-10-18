void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
     int valorLeido = analogRead(A0);
     int valorConvertidoA = map(valorLeido, 0, 1023, 0, 255);
     int valorConvertidoB = map(valorLeido, 0, 1023, 255, 0);
     analogWrite(5, valorConvertidoA);
     analogWrite(6, valorConvertidoB);
}   
