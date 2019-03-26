//https://wiki.keyestudio.com/Ks0258_keyestudio_16-channel_Servo_Motor_Drive_Shield#Sample_Code
//#include <Wire.h>
//#include <Adafruit_PWMServoDriver.h>

//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

//#define MIN_PULSE_WIDTH       650
//#define MAX_PULSE_WIDTH       2350
//#define DEFAULT_PULSE_WIDTH   1500
//#define FREQUENCY             50

//void setup() {
  //pwm.begin();
  //pwm.setPWMFreq(FREQUENCY);
//}

//void loop() {
  //pwm.setPWM(0, 0, pulseWidth(0));
  //pwm.setPWM(1, 0, pulseWidth(0));
  //delay(1000);
  //pwm.setPWM(0, 0, pulseWidth(180));
  //pwm.setPWM(1, 0, pulseWidth(180));
  //delay(1000);
//}

//int pulseWidth(int angle)
//{
  //int pulse_wide, analog_value;
  //pulse_wide   = map(angle, 0, 180, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  //analog_value = int(float(pulse_wide) / 1000000 * FREQUENCY * 4096);
  //return analog_value;
//}

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);

void setup() {
  Serial.begin(9600);
  Serial.println("16 channel PWM test!");

  // if you want to really speed stuff up, you can go into 'fast 400khz I2C' mode
  // some i2c devices dont like this so much so if you're sharing the bus, watch
  // out for this!

  pwm.begin();
  pwm.setPWMFreq(1600);  // This is the maximum PWM frequency
    
  // save I2C bitrate
  uint8_t twbrbackup = TWBR;
  // must be changed after calling Wire.begin() (inside pwm.begin())
  TWBR = 12; // upgrade to 400KHz!
    
}

void loop() {
  // Drive each PWM in a 'wave'
  for (uint16_t i=0; i<4096; i += 8) {
    for (uint8_t pwmnum=0; pwmnum < 16; pwmnum++) {
      pwm.setPWM(pwmnum, 0, (i + (4096/16)*pwmnum) % 4096 );
    }
  }
}
