int ledPin = 13; 
int ledValue = LOW;
long ledStartTime = 0; 
long ledBlinkInterval = 500;  
 
int buttonPin = 6;  
int buttonValue = HIGH; 
long buttonPressTime = 0;  
 
 
void setup()
{
 pinMode(ledPin, OUTPUT);
}
 
void loop()
{
 buttonValue = digitalRead(buttonPin);
 if (buttonValue==LOW && buttonPressTime==0) {
   buttonPressTime = millis();  
 }
 if (buttonValue==HIGH && buttonPressTime!=0) {
   ledBlinkInterval = millis() - buttonPressTime;  
   buttonPressTime = 0;  
 }
 if (millis() - ledStartTime > ledBlinkInterval) {
   ledStartTime = millis();
   if (ledValue == LOW)
     ledValue = HIGH;
   else
     ledValue = LOW;
 
   digitalWrite(ledPin, ledValue);
 }
}
