
#include <SoftwareSerial.h> 
SoftwareSerial tx16s(0, 1); 



bool recv_str_status = false;

String tmp_recv_str = "";
String recv_str = "";

void build_serial_string() {
 
  if (tx16s.available() > 0) {
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
  Serial.println("Start"); // so I can keep track of what is loaded
  Serial.setTimeout(50);
  tx16s.begin(57600);
}

void loop() {
 /*auto xd = tx16s.available();
 if (xd > 0) {
  auto r = tx16s.read();
  myStr += (char)r;
  if(r == '\n'){
      Serial.print(myStr);
      myStr = "";   
  }
 } */
  build_serial_string();
 if(is_recv_str()) {
  Serial.print(get_recv_string());
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
