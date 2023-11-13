int ledPin = 8;
int buttonPin = 12;
int butonRead ;
int dt = 250;
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (ledPin, OUTPUT);
  pinMode (buttonPin , INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  butonRead = digitalRead(buttonPin);
  Serial.println(butonRead);
  
  delay(dt);
  if (butonRead == 1){
    digitalWrite(ledPin ,LOW);
  }
  if (butonRead == 0){
    digitalWrite(ledPin ,HIGH);
  }
  

}
