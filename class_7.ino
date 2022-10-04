//classwork 
#include <Servo.h>

int deg  = 0;
int slow = 20;

Servo servo;

void zeroTo120(){
  for(deg; deg<=120; deg++){
    servo.write(deg);
    delay(slow);
  }
}

void oneTwentyTo60(){
   for(deg; deg>=60; deg--){
    servo.write(deg);
    delay(slow);
  }
}

void sixtyToZero(){
   for(deg; deg>=0; deg--){
    servo.write(deg);
    delay(slow);
  }
}

void setup()
{
  //Serial.begin(9600);
  servo.attach(9);
}

void loop()
{
 
  if(deg==0){
    zeroTo120();
    if(deg>120){
      deg=120;
    }
  }
  else if(deg==120){
     oneTwentyTo60();
     if(deg<60){
       deg = 60;
     }
  }
  else if(deg==60){
    sixtyToZero();
    if(deg<0){
      deg=0;
    }
  }
 
  //Serial.print(deg);

delay(1000);
 
 
}
 


// Basic Code below:

#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(9);
}

void loop()
{
 
  servo.write(0);//Here 0 is dgree
  delay(1000);
  servo.write(90);//Here 90 is dgree
  delay(1000);
  servo.write(180);//Here 180 is dgree
  delay(1000);
  servo.write(0);
 
 
}