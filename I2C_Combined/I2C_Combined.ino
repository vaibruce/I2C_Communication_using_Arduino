#include <Wire.h>
String message1="";
String message2="";
int address=NULL;
int slaveAddress[]={5,8};
int numSlaves = sizeof(slaveAddress) / sizeof(slaveAddress[0]);

void setup(){
  Wire.begin(2);
  Wire.onReceive(receive);
  Serial.begin(9600);
  Serial.println("Enter the address you want to send the message to");
  Serial.println("before sending (enter 0 to broadcast):");
}

void loop(){
  message1="";
  
  if(Serial.available()>0)
  {
    String message2 = Serial.readStringUntil('\n'); 
   
    if(message2==""){
      address=message2.toInt();
      Serial.println("Selected slave address:"+address);
      Serial.println("Enter the message");
      }
      
    if(address==0)
    {
    for(int i=0;i<numSlaves;i++){
    Wire.beginTransmission(slaveAddress[i]);
    Wire.write(message2.c_str());
    Wire.endTransmission();
    }
    }
    else if(address!=NULL){
    Wire.beginTransmission(address);
    Wire.write(message2.c_str());
    Wire.endTransmission(); 
    }
    }

     message2 = "";  // Reset for next input
     Serial.println("Enter slave addresses :");
      
 
  delay(100);

}

void receive()
{ 
  message1="";
  while(Wire.available()>0)
  {
    char c=Wire.read();
    message1+=c;
  }
   Serial.println("Received: "+message1);
  }
