int buttonPin1 = 12;
int buttonPin2 = 11;
int buttonVal1, buttonVal2;
int ledPin = 3;
int ledBright = 0;
int warningLed = 2;
int dt = 300;

void setup() {
  // put your setup code here, to run once:
  pinMode (buttonPin1, INPUT);
  pinMode (buttonPin2, INPUT);
  pinMode (ledPin, OUTPUT);
  pinMode(warningLed , OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print ("Button 1 = ");
  Serial.print(buttonVal1);
  Serial.print (", Button 2 = ");
  Serial.print(buttonVal2);
  Serial.print(" LED Brightness =  ");
  Serial.println (ledBright);
  if (buttonVal1 == 0){
    ledBright +=5;
    
  }
  if (buttonVal2 == 0){
    ledBright -= 5;
  }
  if (ledBright >255){
    ledBright = 255;
    digitalWrite(warningLed , HIGH);
    delay (1000);
    digitalWrite(warningLed, LOW);
  }
  if (ledBright <0){
    ledBright = 0;
    digitalWrite(warningLed , HIGH);
    delay (1000);
    digitalWrite(warningLed, LOW);
  }
  analogWrite(ledPin, ledBright);
  delay(dt);
  

}
