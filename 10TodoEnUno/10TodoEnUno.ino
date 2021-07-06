#include <LiquidCrystal.h>
#include <Servo.h>

LiquidCrystal LCD(11,10,A2,A3,A4,A5);
Servo miServo;

void setup() {
  pinMode(2,INPUT);//1ER PULSADOR
  pinMode(3,INPUT);//2DO PULSADOR
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT);//PARA EL MOTOR

  miServo.attach(9);//EL SERVO
  
  LCD.begin(16,2);
}

void loop() {
  //miServo.write(30);
  LCD.setCursor(0,0);
  LCD.print("Motor: ");
  LCD.setCursor(0,1);
  LCD.print("Servo: ");
  if ( digitalRead(2) == HIGH )
  {
    miServo.write(180);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    LCD.setCursor(7,0);
    LCD.print("DERECHA     ");
    LCD.setCursor(7,1);
    LCD.print("180");
    LCD.setCursor(10,1);
    LCD.print(char(223));
  }
  else if ( digitalRead(3) == HIGH )
  {
    miServo.write(0);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    LCD.setCursor(7,0);
    LCD.print("IZQUIERDA   ");
    LCD.setCursor(7,1);
    LCD.print("0");
    LCD.setCursor(8,1);
    LCD.print(char(223));
    LCD.setCursor(9,1);
    LCD.print("     ");
    
  }
  else
  {
    miServo.write(90);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    LCD.setCursor(7,0);
    LCD.print("ESPERANDO   ");
    LCD.setCursor(7,1);
    LCD.print("90");
    LCD.setCursor(9,1);
    LCD.print(char(223));
    LCD.setCursor(10,1);
    LCD.print("     ");
  }
}
