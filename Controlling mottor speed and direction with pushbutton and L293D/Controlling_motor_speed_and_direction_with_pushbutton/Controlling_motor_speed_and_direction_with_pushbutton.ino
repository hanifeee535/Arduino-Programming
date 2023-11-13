int push1 = 9;
int push2 = 8;
int enPin = 5;//enable pin of IC
int dir1 = 4;//direction pin 
int dir2 = 3; //direction pin
int mSpeed = 255;
int btnVal1 , btnVal2 ;
int dt = 150;

void setup(){
  pinMode(push1, INPUT);
  pinMode(push2 , INPUT);
  digitalWrite(push1 , HIGH);
  digitalWrite(push2 , HIGH);
  Serial.begin(9600);
}
void loop(){
  btnVal1 = digitalRead(push1);
  btnVal2 = digitalRead(push2);

//  Set up the motor speed according to the button
  if (btnVal1 == 0){
    mSpeed +=10;
  
  }
  if (btnVal2 == 0){
    mSpeed -=10;
  
  }

  if (mSpeed > 255){
    mSpeed = 255;
  }
  if(mSpeed <-255){
    mSpeed = -255;
  }

//motor will be stopped
  if (mSpeed == 0){
    digitalWrite(dir1 , LOW);
    digitalWrite(dir2, LOW);
    analogWrite(enPin , (mSpeed));
  }
//  motor will be in forward direction
  if (mSpeed > 0){
    digitalWrite(dir1 , HIGH);
    digitalWrite(dir2, LOW);
    analogWrite(enPin , (mSpeed));
  }
  //motor will be in reverse
  if (mSpeed < 0){
    digitalWrite(dir1 , LOW);
    digitalWrite(dir2, HIGH);
    analogWrite(enPin , abs(mSpeed));
  }
  

  
  Serial.print(btnVal1);
  Serial.print(" ");
  Serial.print(btnVal2);
  Serial.print(" ");
  Serial.println(mSpeed);
  delay(dt);
}
