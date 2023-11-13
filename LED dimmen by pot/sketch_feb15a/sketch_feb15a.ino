int potPin = A5;
int ledPin = 9;
int potVal;
float ledVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode (ledPin, OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead (potPin);
  ledVal = (255./1023.)*potVal;
  analogWrite(ledPin,ledVal) ;
  Serial.println(ledVal);
  Serial.println((5./1023.)*potVal);
  delay(500);
  
  

}
