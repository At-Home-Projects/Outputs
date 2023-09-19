
// setup LCD 
#include <LiquidCrystal.h> // tell Arduino to use the LCD library 
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // setup LCD variable and LCD pins 

void setup() {
  lcd.begin(16,2); // tell Arduino how large your LCD is 
  lcd.clear();     // clear the LCD (in void setup so it only runs once)
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);         // set the LCD cursor in the top left 
  lcd.print("Hello, world!"); // print to the LCD 
  delay(2000);

  lcd.setCursor(0,2);
  lcd.print("What's up?");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("I'm Hungry!");
  delay(2000);
}

