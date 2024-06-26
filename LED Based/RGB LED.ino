
// setup RGB pins (Must be PWM)
int red = 11;
int green = 10;
int blue = 9;


void setup() {

// setup RGB pins as output
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);

}

void loop() {

rgb(255,0,100); // call RGB function and trun it red
delay(2000);    // wait 2 sec

rgb(0,0,0);  // trun the RGB off
delay(2000); // wiat 2 sec

}

void rgb(int r,int g,int b) { // setup function

  analogWrite(red, r);   // red pin
  analogWrite(green, g); // green pin
  analogWrite(blue, b);  // blue pin
  
}

/*
use the folowing alternate void loop if you would not like to use a function
*/

void loop() {
  // turn the RGB on
  analogWrite(red, 255);  // trun red on as bright as it can be
  analogWrite(green, 0);  // turn green off
  analogWrite(blue, 100); // turn blue on at 40% power
  
  delay(3000); // wait 3 sec
  
  // turn the RGB off
  analogWrite(red, 0);   // trun red off
  analogWrite(green, 0); // trun green off
  analogWrite(blue, 0);  // turn blue off
  
  delay(500); // wait 1/2 sec
}
