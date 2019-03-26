#include <Servo.h>

Servo servo1;
Servo servo2; 
long num1, num2;

void setup() {
  servo1.attach(9);
  servo1.attach(13);
  Serial.begin(9600);
  Serial.println("Enter Position = servo1 degree, servo2 degree ");
  Serial.print("Enter Position = ");

}

void loop() {
  while(Serial.available()>0)
  {
    num1= Serial.parseInt();   
    Serial.print(num1);  
    Serial.print(" degree , ");
    num2= Serial.parseInt();   
    Serial.print(num2);  
    Serial.println(" degree ");
    Serial.print("Enter Position = ");
    break;   
    }
    
  servo1.write(num1);
  servo2.write(num2);
  delay(500);

}
