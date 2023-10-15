#include <Arduino.h>
#include "CODBOTS_Timer.h"

CODBOTS_Timer myTimer;

// Function to be called by the timer
void myFunction() {
  Serial.println("Function called!");
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Initialize the timer
  myTimer.start(1000, myFunction, true); // Call myFunction every 1000ms (1 second)
}

void loop() {
  // Update the timer
  myTimer.update();

  // Your main code here
}
