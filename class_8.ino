//Basic Code 1

#include<MQ2.h>
int input = A0;
int lpg,co,smoke;


MQ2 mq2(input);

void setup()
{
  Serial.begin(9600);
  mq2.begin();
}

void loop()
{
 
  float* arr=mq2.read(true);
  lpg=mq2.readLPG();
  co=mq2.readCO();
  smoke=mq2.readSmoke();
 
  Serial.print("LPG Amount: ");
  Serial.println(lpg);
  Serial.print("CO Amount: ");
  Serial.println(co);
  Serial.print("Smoke Amount: ");
  Serial.println(smoke);
  Serial.print("\n");
 
  delay(2000);
 
}

//Classwork code 2

#include<MQ2.h>
int input = A0;
int lpg,co,smoke;
int buzzerPin = 9;

MQ2 mq2(input);

void setup()
{
  Serial.begin(9600);
  mq2.begin();
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
 
  float* arr=mq2.read(true);
  lpg=mq2.readLPG();
  co=mq2.readCO();
  smoke=mq2.readSmoke();
 
  Serial.print("LPG Amount: ");
  Serial.println(lpg);
  Serial.print("CO Amount: ");
  Serial.println(co);
  Serial.print("Smoke Amount: ");
  Serial.println(smoke);
  Serial.print("\n");

  if(smoke>20){
    digitalWrite(buzzerPin, HIGH);
    delay(1000);
    digitalWrite(buzzerPin, LOW);
//    
//    tone(buzzerPin, 1000);
//    delay(1000);
//    noTone(buzzerPin);
  }
 
  delay(2000);
 
}