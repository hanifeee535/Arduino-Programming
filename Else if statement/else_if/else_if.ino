int readPin =A2;
int writePin = 6;
int readVal;
float v;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (readPin , INPUT);
  pinMode (writePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  v = (5./1023.)*readVal;
  Serial.println(v);
  if (v>=4){digitalWrite(writePin, HIGH);}
  else {digitalWrite(writePin, LOW);}
  delay(dt);

}
