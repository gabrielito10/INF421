#define x_paso 2    // Define el Pin de STEP para Motor de eje X
#define x_dire 5    // Define el Pin de DIR  para Motor de eje X
#define x_habi 8    // Define el Pin de ENABLE  para Motor de eje X
#define y_paso 3
#define y_dire 6
#define y_habi 8
#define z_paso 4
#define z_dire 7
#define z_habi 8

int retardo = 1000;   
int tiempo = 200;   // un giro 200 pasos

void setup() {
pinMode(x_paso, OUTPUT); pinMode(x_dire, OUTPUT); pinMode(x_habi, OUTPUT);     
pinMode(y_paso, OUTPUT); pinMode(y_dire, OUTPUT); pinMode(y_habi, OUTPUT);
pinMode(z_paso, OUTPUT); pinMode(z_dire, OUTPUT); pinMode(z_habi, OUTPUT); 
}    

void loop() {
  //giro(x_paso,x_dire,x_habi);
  giro(y_paso,y_dire,y_habi);
  //giro(z_paso,z_dire,z_habi);
}

void giro(int paso_,int dire_,int habi_) {
   digitalWrite(habi_, LOW);  // Habilita el Driver
   digitalWrite(dire_, LOW);   // direccion de giro 1
   
   for(int i=0 ; i<tiempo*5 ; i++){  
    digitalWrite(paso_, HIGH);      
    delayMicroseconds(retardo);          
    digitalWrite(paso_, LOW);       
    delayMicroseconds(retardo); 
   }
  delay(1000);
   
  digitalWrite(dire_, HIGH);   // direccion de giro 2
  for(int i=0 ; i<tiempo/2 ; i++){   
    digitalWrite(paso_, HIGH);      
    delayMicroseconds(retardo);          
    digitalWrite(paso_, LOW);       
    delayMicroseconds(retardo);  
  }
  digitalWrite(habi_, HIGH);   // quita la habilitacion del Driver

 delay(1000);
}
