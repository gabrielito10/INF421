int retardo=10;       // tiempo que dura encendido cada 7 seg (10 mili segundos)

int unidad=0;         // cuenta las unidades (derecha)
int decena=0;         // cuenta las decenas (izquierda)
int bandera=0;     // multiplexacion de uno a otro 7 segmentos
int cont=0;  
void setup() {
  pinMode(2, OUTPUT);  //seg a
  pinMode(3, OUTPUT);  //seg b
  pinMode(4, OUTPUT);  //seg c
  pinMode(5, OUTPUT);  //seg d
  pinMode(6, OUTPUT);  //seg e
  pinMode(7, OUTPUT);  //seg f
  pinMode(1, OUTPUT);  //seg g
  
  pinMode(8, OUTPUT);  // activa digito 1 derecha (unidad)
  pinMode(9, OUTPUT);  // activa digito 2 izquierda (decena)
}

void loop() {
  delay(retardo);               // tiempo que dura encendido cada 7seg antes de cambiar al otro
  cont++;                      // incrementa el contador de ciclos en Uno
  if (cont==100)
    {              // cada cuanto tiempo (ciclos)cambia un numero
      cont=0;                 // inicializa el contador de ciclos   
      unidad=unidad+1;          // incrementa la unidad, primer 7seg
      if (unidad >= 10)
        {        // cuando la unidad llegue a 10 incrementa la decena 
          decena=decena+1;      // incrementa la decena,  segundo 7seg
          unidad=0;               // regresa la unidad a cero
          if (decena>=10)
          {        // cuando la decena llegue a 10 se inicializa a cero    
          decena=0; 
          }      
        }
     }
 
    
    if (bandera == 0) {    // hace la multiplexacion conmutando entre los dos 7seg  izq y der
      digitalWrite(9, 1);    // enciende el derecho
      digitalWrite(8, 0);    // apaga el izquierdo
      DibujarNumero(unidad);  // dibujar el numero en el display 7seg al valor de la unidad
      bandera=1;           // cambia el conmutador para que en el siguiente ciclo cumpla la otra condicion
      
    }
    else{
     digitalWrite(9, 0);       // apaga el derecho
      digitalWrite(8, 1);      // enciende el izquierdo
      DibujarNumero(decena);    // dibujar el numero en el display 7seg al valor de la decena
      bandera=0;             // cambia el conmutador para que en el siguiente ciclo cumpla la otra condicion
      
    }
}
void DibujarNumero(int valor)   
{  
    switch (valor) {
    case 1:                 //escribe en el 7seg el numero 1
      digitalWrite(7, 0);
      digitalWrite(6, 1);
      digitalWrite(5, 1);
      digitalWrite(4, 0);
      digitalWrite(3, 0);
      digitalWrite(2, 0);
      digitalWrite(1, 0);
     break;
    case 2:                //escribe en el 7seg el numero 2
      digitalWrite(7, 1);
      digitalWrite(6, 1);
      digitalWrite(5, 0);
      digitalWrite(4, 1);
      digitalWrite(3, 1);
      digitalWrite(2, 0);
      digitalWrite(1, 1);
     break;      
    case 3:               //escribe en el 7seg el numero 3
       digitalWrite(7, 1);
       digitalWrite(6, 1);
       digitalWrite(5, 1);
       digitalWrite(4, 1);
       digitalWrite(3, 0);
       digitalWrite(2, 0);
       digitalWrite(1, 1);
      break;
    case 4:               //escribe en el 7seg el numero 4
      digitalWrite(7, 0);
      digitalWrite(6, 1);
      digitalWrite(5, 1);
      digitalWrite(4, 0);
      digitalWrite(3, 0);
      digitalWrite(2, 1);
      digitalWrite(1, 1);
     break;
    case 5:               //escribe en el 7seg el numero 5
      digitalWrite(7, 1);
      digitalWrite(6, 0);
      digitalWrite(5, 1);
      digitalWrite(4, 1);
      digitalWrite(3, 0);
      digitalWrite(2, 1);
      digitalWrite(1, 1);
     break;
    case 6:               //escribe en el 7seg el numero 6
      digitalWrite(7, 1);
      digitalWrite(6, 0);
      digitalWrite(5, 1);
      digitalWrite(4, 1);
      digitalWrite(3, 1);
      digitalWrite(2, 1);
      digitalWrite(1, 1);
     break;
    case 7:              //escribe en el 7seg el numero 7
      digitalWrite(7, 1);
      digitalWrite(6, 1);
      digitalWrite(5, 1);
      digitalWrite(4, 0);
      digitalWrite(3, 0);
      digitalWrite(2, 0);
      digitalWrite(1, 0);
     break;
    case 8:              //escribe en el 7seg el numero 8
      digitalWrite(7, 1);
      digitalWrite(6, 1);
      digitalWrite(5, 1);
      digitalWrite(4, 1);
      digitalWrite(3, 1);
      digitalWrite(2, 1);
      digitalWrite(1, 1);
      break;
    case 9:               //escribe en el 7seg el numero 9
      digitalWrite(7, 1);
      digitalWrite(6, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
      digitalWrite(3, 0);
      digitalWrite(2, 1);
      digitalWrite(1, 1);
     break;
    case 0:                //escribe en el 7seg el numero 0
       digitalWrite(7, 1);
       digitalWrite(6, 1);
       digitalWrite(5, 1);
       digitalWrite(4, 1);
       digitalWrite(3, 1);
       digitalWrite(2, 1);
       digitalWrite(1, 0);
      break;
           
    default: 
       digitalWrite(7, 0);
       digitalWrite(6, 0);
       digitalWrite(5, 0);
       digitalWrite(4, 0);
       digitalWrite(3, 0);
       digitalWrite(2, 0);
       digitalWrite(1, 0);
    }  
  
}
