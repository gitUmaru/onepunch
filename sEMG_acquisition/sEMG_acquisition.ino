const int analogInPin = A0; 
const int analogOutPin = 9;
unsigned long time;


int sensorValue = 0; 
int outputValue = 0;

void setup() {
  Serial.begin(9600);
}
 
void loop() {
  sensorValue = analogRead(analogInPin);
  // map it to digital:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);
  // print the results to the Serial Monitor:
  Serial.println(time); //prints time since program started
  delay(100);    
  Serial.print(sensorValue);
  Serial.print(" ");
  // Serial.println(outputValue);
  time = millis();
}
