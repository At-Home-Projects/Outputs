


#include <Servo.h> // call, or include, the servo lybrary  

Servo myServo; // tell arduino that the variable is a servo. in this case the variable name is myServo


void setup() {
  
myServo.attach(5);     // set up servo in pin 5 

}


void loop() {


 myServo.write(180); // turn one direction full speed
 
  delay(5000); // wait 5 sec

  myServo.write(90); // stop (not all stop values are the same. If you have an older servo it may be a little off)

  delay(5000);


  myServo.write(0); // trun other direction full speed

  delay(5000);

}
