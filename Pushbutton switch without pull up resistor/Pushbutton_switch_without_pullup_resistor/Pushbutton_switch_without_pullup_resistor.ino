int buttonPin = 2;
int buttonValue ;
int dt = 200;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin ,HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValue = digitalRead(buttonPin);
  Serial.println(buttonValue);
  delay (dt);

}
