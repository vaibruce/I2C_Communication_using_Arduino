#include <Wire.h>
String message1="";
String message2="";
int slaveAddress[]={5,8}; //Enter the slave addresses of other arduinos
int numSlaves = sizeof(slaveAddress) / sizeof(slaveAddress[0]);

void setup(){
  Wire.begin(2);
  Wire.onReceive(recieve);
  Serial.begin(9600);
  Serial.println("Enter the message to be sent with the first character ");
  Serial.println("being the address to which it should be sent to:"); 
  Serial.println("For Example:5Hi, sends Hi to the arduino at address 5");
}


void loop(){
  message1="";
  if(Serial.available()>0)
  {
    message2=Serial.readStringUntil('\n');
    for(int i=0;i<numSlaves;i++){
    Wire.beginTransmission(slaveAddress[i]);
    Wire.write(message2.c_str());
    Wire.endTransmission();
    }
    
  }  
 
  delay(100);

}

void recieve()
{ message1="";
  while(Wire.available()>0)
  {
    char c=Wire.read();
    message1+=c;
  }
   Serial.println(message1);
  }
