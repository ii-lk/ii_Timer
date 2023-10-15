# CODBOTS_Timer Library

**CODBOTS_Timer** is a lightweight Arduino library that simplifies the task of setting up and managing timers for your projects on ESP32 and other Arduino-compatible boards. It provides an easy-to-use interface for scheduling functions to be called at specific intervals, with the option for one-time or repetitive execution.

## Features

- Simple and intuitive API for managing timers.
- Set up timers with specified intervals and callbacks.
- Choose between one-time and repetitive timer execution.
- Built for compatibility with ESP32 and other Arduino-compatible platforms.

## Installation

1. Download the library ZIP file from the [Releases](https://github.com/yourusername/your-repo/releases) page.
2. Open the Arduino IDE.
3. Go to `Sketch > Include Library > Add .ZIP Library...` and select the downloaded ZIP file.

## Usage

```cpp
#include <CODBOTS_Timer.h>

CODBOTS_Timer myTimer;

// Function to be called by the timer
void myFunction() {
  // Your code here
}

void setup() {
  // Initialize the timer
  myTimer.start(1000, myFunction, true); // Call myFunction every 1000ms (1 second)
}

void loop() {
  // Update the timer
  myTimer.update();

  // Your main code here
}
