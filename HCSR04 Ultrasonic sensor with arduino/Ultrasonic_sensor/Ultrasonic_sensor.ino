int triggerPin = 12;
int echoPin = 11;
float pingTravelTime;
float pingTravelDistance;
float distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(triggerPin , OUTPUT);
  pinMode(echoPin ,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggerPin, LOW); //trigger pin low to create the sound wave
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pingTravelTime = pulseIn(echoPin ,HIGH); // measure the time between trigger out wave
  // and eco in wave
  pingTravelDistance = pingTravelTime*.013503;
  distance = pingTravelDistance/2.0; // As sound travels two times to the distance 
  // of the object
  delay (250);

 
  Serial.print("Distance to target is : ");
  Serial.print(distance);
  Serial.println("  inchs");
  
  

}
