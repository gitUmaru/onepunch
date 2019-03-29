#include <Servo.h>

const int analogInPin = A0;
const int analogOutPin = 9;
const int degreeRotation = 923/180;
unsigned long time;


int sensorValue = 0;
int outputValue = 0;
int degreeValue = 0;
int servoPos = 0;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);

  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  // map it to digital:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);
  // print the results to the Serial Monitor:
  time = millis();
  //Serial.println(time); //prints time since program started
  delay(100);
  //Serial.print(sensorValue);
  Serial.print(" ");
  // Serial.println(outputValue);

  if(outputValue >= 100) {
    degreeValue = (sensorValue + degreeRotation - 100)/degreeRotation;
    for(servoPos=0; servoPos <= degreeValue; servoPos += 10){
      Serial.println(servoPos);
      servo1.write(servoPos);
      servo2.write(servoPos);
      servo3.write(servoPos);
      servo4.write(servoPos);
      servo5.write(servoPos);
      delay(100);
      if(servoPos=180) {
        servopos=180
      }
    }

  }
   else {
    servoPos = 0;
    servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
    servo5.write(servoPos);
    delay(100);


   }
  }
