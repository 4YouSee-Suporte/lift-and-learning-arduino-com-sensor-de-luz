#include <Keyboard.h>
//const int led = 13;
const int ldr1 = A0;
const int ldr2 = A1;
const int ldr3 = A2;
int pointer1;
int pointer2;
int pointer3;
void setup() {
  Serial.begin(9600);  
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
  pinMode(ldr3, INPUT);
  //pinMode(LED_BUILTIN, OUTPUT);
  //pinMode(led,OUTPUT);
  Keyboard.begin();
}

void loop() {
  int ldr1Status = analogRead(ldr1);
  int ldr2Status = analogRead(ldr2);
  int ldr3Status = analogRead(ldr3);
  String Lux = " Lux";
  String sensor1 =  "Sensor 1 (A0) (MENTOS WHITE) = ";
  String sensor2 =  "Sensor 2 (A1) (MENTOS GREEN) = ";
  String sensor3 =  "Sensor 3 (A2) (MENTOS BLUE) = ";
  Serial.println(sensor1+ldr1Status+Lux);
  Serial.println(sensor2+ldr2Status+Lux);
  Serial.println(sensor3+ldr3Status+Lux);
  
//************* SENSOR 1 ****************//
  if (ldr1Status <= 200) {
    pointer1 = 1;
    //Serial.print("Pointer 1 = "+pointer1);
  } else if( pointer1 == 1 && ldr1Status > 220){ 
          Serial.println("------> Entrou Sensor 1 <------");
          Keyboard.print("11\n");
          pointer1 = 0;
          }     
//************* SENSOR 2 ****************//
  if (ldr2Status <= 500) {
    pointer2 = 1;
   // Serial.println("Pointer 2 = "+pointer2);
  } else if( pointer2 == 1 && ldr2Status > 520 ){ 
         Serial.println("------> Entrou Sensor 2<------");
         Keyboard.print("12\n");
         pointer2 = 0;
          }            
//************* SENSOR 3 ****************//
  if (ldr3Status <= 400) {
    pointer3 = 1;
   // Serial.println("Pointer 3 = "+pointer3);
  } else if( pointer3 == 1 && ldr3Status > 500 ){ 
         Serial.println("------> Entrou Sensor 3<------");
         Keyboard.print("13\n");
         pointer3 = 0;
          }      

  Keyboard.releaseAll();
  Serial.println("----------------------");
  delay(500);
  
} //End Loop
