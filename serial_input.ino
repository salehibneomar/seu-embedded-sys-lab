int trig = 8;
int echo = 9;
float distance, duration, v;
int temperature;
bool isCalculated = false;

void calculate(){
  v = 332 + (0.6*temperature);
  v = (v/1000000) * 100;
}

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {

  if(!isCalculated){
    Serial.println("Enter temperature:");
    while(Serial.available() == 0){}
    temperature = Serial.parseInt();
    calculate();
    isCalculated = true;
  }

  delay(5);
  digitalWrite(trig, LOW);
  delay(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (v * duration)/2;

  Serial.print("The distance is: ");
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);

}
