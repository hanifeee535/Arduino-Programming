#include<LiquidCrystal.h>
#include<SimpleDHT.h>
int pinDHT11 = 9;
byte temperature = 0;
byte humidity = 0;
//int err = SimpleDHTErrSuccess;
SimpleDHT11 dht11(pinDHT11);
int rs = 2, en = 3 , d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd (rs ,en, d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  dht11.read(&temperature, &humidity,NULL);
  lcd.setCursor(0,0);
  lcd.print("Welcome");
  delay(2000);
  lcd.clear();
  lcd.print("Temp: " );
  lcd.print (int(temperature));
  lcd.print(" * C");
  lcd.setCursor(0,1);
  lcd.print("Hum : ");
  lcd.print(humidity);
  
  //Serial.print(int(temperature));
  delay(2000);
  lcd.clear();
  

}
