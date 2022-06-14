
#include <SoftwareSerial.h>  
        
SoftwareSerial Sp(10, 11);  // pin 10 RX, pin 11 TX

void setup(){
  Serial.begin(9600);   
  Serial.println("Listo");  
  Sp.begin(38400);    
}

void loop(){
if (Sp.available())       
   Serial.write(Sp.read());   

if (Serial.available())     
   Sp.write(Serial.read());  
}
