
/*
 * Code for a SparkFun TB6612FNG Motor Driver
 * with our experiance this will work for most if not all DC motors.
 * we use 2 motors in this sketch. if you only need one, remove all of the variables and functions pertaining to B but not A (motor 2 not 1)
 * rewriten from: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41/circuit-5a-motor-basics
 */

// directional pins (does not need to be PWM)
const int AIN1 = 13;           // control pin 1 on the motor driver for the first motor
const int AIN2 = 12;           // control pin 2 on the motor driver for the first motor

const int BIN1 = 9;            // control pin 1 on the motor driver for the second motor
const int BIN2 = 8;            // control pin 2 on the motor driver for the second motor

// Speed pins (needs to be PWM)
const int PWMA = 11;          // speed control pin on the motor driver for the first motor
const int PWMB = 10;          // speed control pin on the motor driver for the second motor


void setup() {

  //set motor 1 control pins as outputs
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  //set motor 2 control pins as outputs
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  
}

void loop() {

  // the value of the speed should be between 130 and 255 or -130 and -255
  spinMotor1(130);  // turn motor 1 forward slow
  spinMotor2(-255); // turn motor 2 backward fast


}

void spinMotor1(int motorSpeed)       //function for driving motor 1
{
  if (motorSpeed > 0)                 //if the motor should drive forward (positive speed)
  {
    digitalWrite(AIN1, HIGH);         //set pin 1 to high
    digitalWrite(AIN2, LOW);          //set pin 2 to low
  }
  else if (motorSpeed < 0)            //if the motor should drive backward (negative speed)
  {
    digitalWrite(AIN1, LOW);          //set pin 1 to low
    digitalWrite(AIN2, HIGH);         //set pin 2 to high
  }
  else                                //if the motor should stop
  {
    digitalWrite(AIN1, LOW);          //set pin 1 to low
    digitalWrite(AIN2, LOW);          //set pin 2 to low
  }
  analogWrite(PWMA, abs(motorSpeed)); //now that the motor direction is set, drive it at the entered speed
}


// function for determening motor direction. idealy for a robot, edit as needed.
void spinMotor2(int motorSpeed) {     //function for driving motor 2

  if (motorSpeed > 0){                //if the motor should drive forward (positive speed)
  
    digitalWrite(BIN1, HIGH);         //set pin 1 to high
    digitalWrite(BIN2, LOW);          //set pin 2 to low
  
  } else if (motorSpeed < 0) {        //if the motor should drive backward (negative speed)
  
    digitalWrite(BIN1, LOW);          //set pin 1 to low
    digitalWrite(BIN2, HIGH);         //set pin 2 to high
  
  } else {                            //if the motor should stop
   
    digitalWrite(BIN1, LOW);          //set pin 1 to low
    digitalWrite(BIN2, LOW);          //set pin 2 to low
  
  }
  analogWrite(PWMB, abs(motorSpeed)); //now that the motor direction is set, drive it at the entered speed
}
