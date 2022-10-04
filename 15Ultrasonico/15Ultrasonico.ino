int TRIGGER=2;
int ECHO=3
void setup() {
  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  digitalWrite(TRIGGER, LOW);
}

void loop() {
     digitalWrite(TRIGGER, HIGH);
     delayMicroseconds(10);
     digitalWrite(TRIGGER, LOW);
     long tiempo = pulseIn(ECHO, HIGH);
     long distancia = tiempo/59;
     Serial.print(distancia)
     Serial.println(" cm");
     delay(200);
}
