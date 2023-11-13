int readPin = A2;
int readVal;
float v;
int waitT = 500;
void setup(){
  Serial.begin(9600);
  }
void loop(){

 readVal= analogRead (readPin);
 v=(5./1023.)*readVal;
 Serial.println(v);
 delay(waitT);
 
  
  }
