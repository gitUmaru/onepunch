 int buttonPin = 7;     // the number of the pushbutton pin
int ledPin =  13;      // the number of the LED pin
boolean on=false;
int buttonState = 0; 

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT);    
}

void loop(){
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {    
    if(on==true){
      on=false;
    }  else{
      on=true;
    }
  }
 
  
   if (on == true) {    
    digitalWrite(ledPin, HIGH);  
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  
   delay(100); 
  
}
