void setup() {
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
//  if(sensorValue > 0)
//  {
//    digitalWrite(13, HIGH);
//    }
//   else {
//    digitalWrite(13, LOW);
//   }
  Serial.println(sensorValue);
  delay(100);        // delay in between reads for stability
}
