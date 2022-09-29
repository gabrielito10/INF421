void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(10,INPUT);
  digitalWrite(4,HIGH); //depende del rele
}
void loop() {
    int valorLeido = analogRead(A1);
    int valorConvertido = map(valorLeido, 0, 1023, 100, 0);
    Serial.println(valorConvertido);
    if (valorConvertido < 20) 
      digitalWrite(4,LOW); //Depende del rele
    else
      digitalWrite(4,HIGH); //Depende del rele  
}
