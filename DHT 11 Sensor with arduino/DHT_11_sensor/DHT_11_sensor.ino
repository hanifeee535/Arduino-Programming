#include <SimpleDHT.h>


int pinDHT11 = 2;
byte temperature = 0;
byte humidity = 0;
int err = SimpleDHTErrSuccess;
SimpleDHT11 dht11(pinDHT11);

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  
  
  dht11.read(&temperature, &humidity,NULL);
  
  Serial.print((int)temperature); Serial.print(" *C, "); 
  Serial.print((int)humidity); Serial.println(" H");
  
  // DHT11 sampling rate is 1HZ.
  delay(500);
}
