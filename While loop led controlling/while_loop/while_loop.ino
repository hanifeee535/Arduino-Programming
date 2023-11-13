int potPin = A0;
int ledPin = 7;
int potVal;
int delayTime = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode (potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(delayTime);
  while (potVal>400){
    digitalWrite(ledPin, HIGH);
    potVal = analogRead(potVal);
    delay(delayTime);
    }
    digitalWrite(ledPin, LOW);

}
