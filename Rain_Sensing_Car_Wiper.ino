#include <Servo.h>
#define RAIN_SENSOR 2
Servo wiper;
int lastState = HIGH;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RAIN_SENSOR, INPUT);
  wiper.attach(9);
  wiper.write(0); // Wiper initial position

}
void loop() {
  // put your main code here, to run repeatedly:
  int rainState = digitalRead(RAIN_SENSOR);
  Serial.println(rainState);
  if(rainState != lastState){
    delay(50);
    rainState = digitalRead(RAIN_SENSOR);
    if(rainState == LOW){
      Serial.println("Rain detected! Wiper ON.");
    }else{
      Serial.println("Rain Stopped! Wiper OFF.");
      wiper.write(0);
    }
    lastState = rainState;
    
    
  }
  if(rainState == LOW){
    wiper.write(0);
    delay(500);
    wiper.write(90);
    delay(500);
  }  
    
  delay(200); //Small delay to reduce senor noise 
}
