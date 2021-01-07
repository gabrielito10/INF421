void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorLeido = analogRead(A0);
  Serial.println(valorLeido);
  delay(100);
}
