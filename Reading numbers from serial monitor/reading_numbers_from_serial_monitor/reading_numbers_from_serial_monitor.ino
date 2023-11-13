int numBlinks;
int ledPin = 7;
int delayTime = 300;
 
String msg = "How Many Blinks Do You Want? : " ;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){
  
  }
  numBlinks = Serial.parseInt(); //Will Take input from user in the serial monitor
  for (int i=0;i<numBlinks;i++){
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    digitalWrite(ledPin, LOW);
    delay(delayTime);
    }
}
