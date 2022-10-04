#include <dht.h>
dht DHT;

int tempPin = 7;

void setup() {
  Serial.begin(9600);
}


void loop() {

  int var = DHT.read11(tempPin);
  int temperature = DHT.temperature;
  int humidity = DHT.humidity;


  if(temperature<25){
    Serial.println("Cold Temperature");

  }
  else if(temperature==25){
    Serial.println("Normal Temperature");
  }
  else if(temperature>25){
    Serial.println("Warm Temperature");
  }

    Serial.print("Current Temperature: ");
    Serial.println(temperature);
    Serial.print("Humidity: ");
    Serial.println(humidity);
   
  Serial.println("\n");
  delay(2000);
                       
}
