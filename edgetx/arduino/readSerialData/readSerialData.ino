
#include <SoftwareSerial.h> 
SoftwareSerial tx16s(10, 11); 


void setup() {
  Serial.begin(9600);
  Serial.println("Start"); // so I can keep track of what is loaded
  tx16s.begin(57600);
}

void loop() {
  if (tx16s.available())       // si hay informacion disponible desde modulo
    Serial.write(tx16s.read());   // lee Bluetooth y envia a monitor serial de Arduino
  //if (tx16s.available()) {
  //  char c = Serial.read(); //gets one byte from serial buffer
  //  tx16s.println(c);
  // }
}
