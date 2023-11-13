float sinval;
float cosineVal;
float j;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (j = 0; j<=2* 3.1416; j=j+.01){
    sinval = sin(j);
    cosineVal = cos(j);
    Serial.print (sinval);
    Serial.print(","); //in order to plot multiople channel in serial plot
    // at the same time we gave a comma. we can use spaces. this is called limiter.
    Serial.println(cosineVal);
  }

}
