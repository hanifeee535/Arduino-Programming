int redPin = 12;
int greenPin = 11;
int bluePin = 10;
int yellowPin = 8;
String myColor;
String msg = "What Color of LED? ";
void setup(){
  pinMode (redPin, OUTPUT);
  pinMode (greenPin, OUTPUT);
  pinMode (bluePin, OUTPUT);
  pinMode (yellowPin, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  Serial.println (msg);
  while (Serial.available()==0){
    
  }
  myColor = Serial.readString();
  if (myColor == "red"){
    digitalWrite(redPin, HIGH);
    digitalWrite (greenPin, LOW);
    digitalWrite (bluePin, LOW);
    digitalWrite (yellowPin, LOW);
  }
  if (myColor == "green"){
    digitalWrite(redPin, LOW);
    digitalWrite (greenPin, HIGH);
    digitalWrite (bluePin, LOW);
    digitalWrite (yellowPin, LOW);
  }
  if (myColor == "blue"){
    digitalWrite(redPin, LOW);
    digitalWrite (greenPin, LOW);
    digitalWrite (bluePin, HIGH);
    digitalWrite (yellowPin, LOW);
  }
  if (myColor == "yellow"){
    digitalWrite(redPin, LOW);
    digitalWrite (greenPin, LOW);
    digitalWrite (bluePin, LOW);
    digitalWrite (yellowPin, HIGH);
  }
}
