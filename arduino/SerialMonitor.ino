/*
   If you don't have the FTDI UART to USB you can use Arduino together 
   with this code to emulate the operation, 
   you can use OpenSerialPort or the same Serial Port of Arduino.

   CHECK THIS: If Arduino is receiving data from the transmitter 
   and updates the code to Arduino it will fail, 
   you must first disconnect the data cable and then update the code.
*/
#include <SoftwareSerial.h>  

// Change this if needed   
SoftwareSerial Sp(10, 11);  // pin 10 RX, pin 11 TX

// Change this if needed
const unsigned int ARDUINO_BAUD = 9600;
const unsigned int RADIO_BAUD = 38400;

void setup(){
  Serial.begin(ARDUINO_BAUD);   
  Sp.begin(RADIO_BAUD);    

  Serial.println("READY");  
}

void loop(){
if (Sp.available())       
   Serial.write(Sp.read());   

if (Serial.available())     
   Sp.write(Serial.read());  
}
