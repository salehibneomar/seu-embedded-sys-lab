int trigpin = 8;
int echopin = 9;
float distance;
float duration;

void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  
 digitalWrite(trigpin,LOW);
 delay(5);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 duration = pulseIn(echopin,HIGH);
// Serial.println(duration);
 distance = (duration * 0.03518)/2;
 Serial.print("The distance is: ");
 Serial.print(distance);
 Serial.println("cm");
 delay(500);
 

}

