int pin = 9;
int v = 0;
bool isIncreasing = true;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  
  analogWrite(pin, v);

  if(isIncreasing){
    v++;
    if(v>=255){
      isIncreasing = false;
    }
  }
  else{
    v--;
    if(v<=0){
      isIncreasing = true;  
    }
  }
  
  delay(5);
  
}
