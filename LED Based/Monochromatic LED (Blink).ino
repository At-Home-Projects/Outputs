
int ledPin = 13; // setup the LED in pin 13 (ardino has a built in led connected to this pin, so there is not even a need to build a surcuit!)

void setup() {
  pinMode(ledPin, OUTPUT);  // initialize the pin the led is in as an output.
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off
  delay(1000);                      // wait for a second
}
