#include <SoftwareSerial.h>// import the serial library
 
#define Water_Sensor1 A0 
#define Water_Sensor2 A5

SoftwareSerial BT(10, 11); // RX, TX

void setup() {
   pinMode(Water_Sensor1, INPUT); // The Water Sensor is an Input
   pinMode(Water_Sensor2, INPUT); // The Water Sensor is an Input
   BT.begin(9600);
  // Serial.begin(9600);
}

void loop() {
  
   if( analogRead(Water_Sensor1) > 100) {
    BT.println(1);
  //  Serial.println("Leak ta spot1");
   }
   else if ( analogRead(Water_Sensor2) > 100) {
    BT.println(2);
   //   Serial.println("Leak ta spot2");
   }
      else
      {
    //Serial.println("no Leak Detected");
        }
       delay(1000);
}
