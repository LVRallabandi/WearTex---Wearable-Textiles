void setup() {
  pinMode(11, OUTPUT);    // sets the digital pin 11 as output
  pinMode(12, OUTPUT);    // sets the digital pin 12 as output
  pinMode(10, OUTPUT);    // sets the digital pin 13 as output
  //Serial.begin(9600);
}

void loop() {
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
          
  if(sensorValue1>0){
    digitalWrite(11, HIGH);
  }
  else{
   digitalWrite(11, LOW); 
  }
  if(sensorValue2>0){
    digitalWrite(12, HIGH);
  }
  else{
   digitalWrite(12, LOW); 
  }
   if(sensorValue3>0){
    digitalWrite(10, HIGH);
  }
  else{
   digitalWrite(10, LOW); 
  }
  
}
