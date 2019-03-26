from nanpy import (ArduinoApi, SerialManager)
import time


ledPin = 7
buttonPin = 8
ledState = False
buttonState = 0


try:
    connection = SerialManager()
    a = ArduinoApi(connection=connection)
except:
    print('Failed')

a.pinMode(ledPin, a.OUTPUT)
a.pinMode(buttonPin, a.INPUT)

try:
    while True:
        buttomState = a.digitalRead(buttonPin)
        print(buttonState)
        if buttonState:
            if ledState:
                a.digitalWrite(ledPin, a.LOW)
                ledState = False
                print('off')
                sleep(1)
            else:
                a.digitalWrite(ledPin, a.HIGH)
                ledState = True
                print('on')
                sleep(1)
except:
    a.digitalWrite(ledPin, a.LOW)
