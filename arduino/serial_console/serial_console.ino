
#include <SoftwareSerial.h> 
SoftwareSerial tx16s(0, 1); 
 String myStr = "";


void setup() {
  Serial.begin(9600);
  Serial.println("Start"); // so I can keep track of what is loaded
  Serial.setTimeout(50);
  tx16s.begin(57600);
}

void loop() {
 auto xd = tx16s.available();
 if (xd > 0) {
  //Serial.print(tx16s.read());   // lee Bluetooth y envia a monitor serial de Arduino
  //Serial.print(" xd: ");
  //Serial.println(xd);

  auto r = tx16s.read();
  myStr += (char)r;
  if(r == '\n'){
      Serial.print(myStr);
      myStr = "";   
  }
 }

 //tx16s.write("hola");
 //tx16s.println("hola");
 //if (Serial.available()) {

   
  // tx16s.write("hola");
    //Serial.println(Serial.readString());
  //}
  //if (tx16s.available()) {
  //  char c = Serial.read(); //gets one byte from serial buffer
  //  tx16s.println(c);
  // }
}
