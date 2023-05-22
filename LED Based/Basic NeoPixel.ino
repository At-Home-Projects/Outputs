

/*
*  rewriten from the simple example in the NeoPixel lybrary
*  (Requiers Adafruit NeoPixel lybrary)
*  (will work with all NeoPixles)
*/

#include <Adafruit_NeoPixel.h> // incude the NeoPixel lybrary

int neoPin = 6; // Which pin on the Arduino is connected to the NeoPixels?
int numPixels = 8; // How many NeoPixels are there?

Adafruit_NeoPixel pixels(numPixels, neoPin, NEO_GRB + NEO_KHZ800); // setup our strip

void setup() {
  pixels.begin(); // INITIALIZE NeoPixel
}

void loop() {
  pixels.clear(); // Set all pixels to off

  // turn all pixels on
  for (int i = 0; i < numPixels; i ++) {  // The first NeoPixel in a strand is #0, second is 1, all the way up to the count of pixels minus one.

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 50, 0)); // turn the given pixel on

    pixels.show();   // Send the updated pixel colors to the hardware.
    
    // add a delay hear to see wich one lights up first!
  
  }

  // turn and indivdual pixel on
  pixels.setPixelColor(3, pixels.Color(50, 0, 0));
  pixels.show();

  while(true); // stop the program from looping
}
