#include<LiquidCrystal.h>
int rs = 2, en = 3, d4 = 4, d5=5,d6 = 6,d7 = 7;
int triggerPin =8, echoPin = 9;
float travelTime, travelDistance, distance;

LiquidCrystal lcd(rs , en, d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  pinMode (triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggerPin ,LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin ,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin ,LOW);
  travelTime = pulseIn(echoPin, HIGH);
  travelDistance = travelTime *.013503;
  distance = travelDistance/2.0;
  lcd.setCursor(0,0);
  lcd.print("Distance in inchs: ");
  lcd.setCursor(0,1);
  lcd.print(distance);
  delay(500);
}
