
/*
 * This is basic code for a 16 pin, 16X2 LCD screen useing Arduino.
 *
 * Refer to the link below for more info:
 * https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41/circuit-4a-lcd-hello-world
 *
 * If you have a I2C Shield refer to the I2C LCD file at: https://github.com/At-Home-Projects/light-and-display-outputs/blob/main/I2C%20LCD(4%20pin%20shield).ino 
 *
 * for coustom LCD characters refer to the LCD coustom char file at: https://github.com/At-Home-Projects/light-and-display-outputs/blob/main/LCD%20custom%20char.ino
 */


#include <LiquidCrystal.h> // tell arduino to use the lcd library

// LiquidCrystal LCD_Name(RS_pin, enable_pin, d4, d5, d6, d7);
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // setup lcd variable and lcd pins (does not need to be PWM)

void setup() {

  lcd.begin(16,2); // tell arduino how large your LCD is
  
}

void loop() {
  
  lcd.clear(); // clear all pixels on display (you can also put this in void setup, it is more convinent if all you are going to do is display one thing with no delays)
  
  lcd.setCursor(0,0); // tell whare to put the cursor (in this case 0,0 = top left)
  lcd.print("Hello, world!"); // print Hello, world! on the LCD
  
  lcd.setCursor(0,1); // move the cursor to the second line (so the next statement will apear on the second line)
  lcd.print("How are you?"); // print How are you? on the second line
  
  while (true); // end code so the lcd does not flicker on and off. you can otherwise use a delay with a min length of 50 ms (not nessesary)

}
