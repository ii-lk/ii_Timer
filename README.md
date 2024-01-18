# ii_Timer Library

The ii_Timer library provides a simple timer class for managing time intervals. It includes a Timer class for individual timers and a ii_Timer class for managing multiple timers.

## Timer Class

### Constructor

```cpp
Timer(unsigned long interval = 0);
```

Creates a timer with the specified time interval (default is 0).

### Methods

- **isTime(bool onstart):**
  Checks if the specified time interval has elapsed.
  
  - *onstart:* If true, the timer starts from the beginning; if false, it continues from the last reset.
  
  Returns true if the interval has elapsed, false otherwise.

- **reset():**
  Resets the timer.

## ii_Timer Class

### Constructor

```cpp
ii_Timer();
```

Creates a ii_Timer object.

### Methods

- **addTimer(unsigned long interval):**
  Adds a new timer with the specified time interval.

- **isTime(int timerId, bool onstart):**
  Checks if the specified timer's interval has elapsed.
  
  - *timerId:* The ID of the timer to check.
  - *onstart:* If true, the timer starts from the beginning; if false, it continues from the last reset.
  
  Returns true if the interval has elapsed, false otherwise.

- **reset(int timerId):**
  Resets the specified timer.
```

## Installation

1. Download the ii_Timer library ZIP file.
2. In the Arduino IDE, go to `Sketch > Include Library > Add .ZIP Library...` and select the downloaded ZIP file.

## Example Usage

```cpp
#include <ii_Timer.h>

ii_Timer myTimers;

void setup() {
  myTimers.addTimer(1000); // Add a timer with a 1-second interval
}

void loop() {
  if (myTimers.isTime(0, false)) {
    // Do something every second
  }
}
```

This example sets up a timer with a 1-second interval and performs an action when the timer elapses.

Feel free to explore the library and customize it according to your project requirements.

## License

This library is released under the [MIT License](LICENSE).
```

Replace `<placeholders>` with actual values or modify the content as needed.