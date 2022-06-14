/*
  Not finished
*/
#include <SoftwareSerial.h> 
const byte rxPin = 0;
const byte txPin = 1;
SoftwareSerial tx16s(rxPin, txPin); 

bool recv_str_status = false;

String tmp_recv_str = "";
String recv_str = "";

int MAX_RECV_SIZE = 500;

void build_serial_string() {
  if(tmp_recv_str.length() >= MAX_RECV_SIZE) {
     tmp_recv_str = "";
     recv_str_status = false;
     Serial.println("Could not read the string");
  }
  
  if (tx16s.available() > 0) {
    Serial.print("wtf");
    auto c_recv = tx16s.read();
    tmp_recv_str += (char)c_recv;
    if(c_recv == '\n'){
        recv_str = tmp_recv_str;
        recv_str_status = true;
        tmp_recv_str = "";   
    }
  }
}

bool is_recv_str() {
  bool tmp = recv_str_status;
  recv_str_status = false;
  return tmp;
}

String get_recv_string()
{
  return recv_str;
}

void setup() {
  Serial.begin(9600);
  Serial.println("Start"); 
  tx16s.begin(57600);
}

void loop() {

 build_serial_string(); 
 if(is_recv_str()) {
  Serial.print(get_recv_string());
 }

 //tx16s.write('15');
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
