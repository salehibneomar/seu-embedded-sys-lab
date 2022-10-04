
int trig = 8;
int echo = 9;
float dis, dur;
int buzzer = 12;

void alert(int n, int hz, int dly){
    for(int i=0; i<n; i++){
      tone(buzzer, hz);
      delay(dly);
      noTone(buzzer);
      delay(dly);
    }
}

void setup(){
  
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
}

void loop(){
  
  // Buzzer code, the toner func. works as the HIGH of the buzzer and the next param holds a HZ value
  // noToner func means LOW the buzzer
  //  tone(buzzer,3000);//
  //  delay(500);
  //  noTone(buzzer);
  //  delay(500);
  
  digitalWrite(trig, LOW);
  delay(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  dur = pulseIn(echo, HIGH);
  dis = (0.03422 * dur)/2;
  
  Serial.print("The distance is: ");
  Serial.print(dis);
  Serial.println(" CM");
  
  delay(500);
  
  if(dis<10){
    alert(1, 300, 300);
  }
  else if(dis>10 && dis<20){
    alert(2, 1000, 200);
  }
  else if(dis>20){
    alert(3, 1500, 100);
  }
  
  delay(1000);
  
}
