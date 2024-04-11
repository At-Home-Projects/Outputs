
/*
 * This is code for a 16 pin, 16X2 LCD screen coustom Character (with small changes it will work with other sizes)
 * 
 * use the generator on this website to easly get your binary:
 * https://maxpromer.github.io/LCD-Character-Creator/
 * 
 * or, if you are on an AA school computer use this one:
 * https://diyusthad.com/custom-character-generator-lcd
 */


#include <LiquidCrystal.h> // tell arduino to use the lcd lybrary

// LiquidCrystal LCD_Name(RS_pin, enable_pin, d4, d5, d6, d7);
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // setup lcd variable and lcd pins

// Make custom characters:
byte Skull[] = { // create a binary secuence to create the char (more info at bottom of code)
0b00000,
0b01110,
0b10101,
0b11011,
0b01110,
0b01110,
0b00000,
0b00000
};

void setup() {

  lcd.begin(16, 2);  // Specify the LCD's number of columns and rows
  
  lcd.createChar(0, Skull); // define skull as char 0 (for others go up in sequental order (0,1,2,3,4, ect))

  lcd.clear(); // Clears the LCD screen

  lcd.print("Custom Character");  // Print a message to the lcd (not necessary)
}

void loop() {

  lcd.setCursor(0, 1); // set the cursor to the second row
  lcd.write(byte(0));  // show char 0 (in this case the skull)

}


/*
 * Each character display has pixels. they are 5 across, and 8 down.
 * each line of binary in the array above is a row of pixels.
 * 1 represents a pixel that is on, and 0 reprezents a pxel that is off
 * I belive 0b is the initializer (like int) for the line of binary, as it does not contribute to a pxel(s)
 */
