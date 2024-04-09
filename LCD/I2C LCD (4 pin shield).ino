
/*
* Code for an LCD wiht a 4 pin I2C shield (for more general and expansive code for LCDs veiw Basic LCD.ino)
* for more info refer to:
* https://lastminuteengineers.com/i2c-lcd-arduino-tutorial/ 
*/


#include <LiquidCrystal_I2C.h> // include the I2C library

// tell arduino the LCD adress and the size (spesific to I2C)
LiquidCrystal_I2C lcd(0x27, 16, 2); //  (refer to the link above for info on how to find the adress) 

void setup() {
  lcd.init();                 // initialize the interface to the LCD (spesific to I2C)
  lcd.backlight();            // turn the backlight on (spesific to I2C)
  lcd.setCursor(1, 0);        // set the cursor
  lcd.print("Hello, world!"); // print hello world
}

void loop() {
  lcd.setCursor(7, 1);        // set the cursor
  lcd.print(millis() / 1000); // count in incriments one on the screen every second
}
