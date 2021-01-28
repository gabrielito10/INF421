#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal miLCD(2,3,14,15,16,17);  //2,3,A0,A1,A2,A3
                  //RS,E,D4,D5,D6,D7

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {11, 10, 9, 8}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {7, 6, 5, 4}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
  miLCD.begin(16,2);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    //Serial.println(customKey);
    miLCD.setCursor(7,0);
    miLCD.print(customKey);
  }
}
