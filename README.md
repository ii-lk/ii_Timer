# ii_Timer Library

## Overview
The `ii_Timer` library provides a simple and efficient way to manage multiple timers in Arduino projects. It's designed for easy integration and flexibility, catering to various applications requiring timed operations.

## Features
- **Multiple Timers**: Support for multiple independent timers.
- **Customizable Intervals**: Set different intervals for each timer.
- **Lightweight and Efficient**: Minimal memory footprint and CPU usage.

## Installation
1. Download the `ii_Timer` library.
2. Extract the downloaded file.
3. Place the `ii_Timer` folder in your Arduino 'libraries' directory.
4. Restart the Arduino IDE.

## Usage
To use the `ii_Timer` library in your Arduino sketches, include it at the beginning of your code:
```cpp
#include <ii_Timer.h>
```

## Examples

### Simple Timer
This example demonstrates the basic usage of the `ii_Timer` library by setting up three different timers.

```cpp
#include <ii_Timer.h>

#define TIMER_MOTORS 0
#define TIMER_LED 1
#define TIMER_SENSORS 2

ii_Timer timer;

void setup() {
    Serial.begin(115200);
    
    timer.addTimer(TIMER_MOTORS, 100);
    timer.addTimer(TIMER_LED, 500);
    timer.addTimer(TIMER_SENSORS, 1000);
}

void loop() {
    if (timer.isTime(TIMER_MOTORS)) {
        // Motor actions
    }
    if (timer.isTime(TIMER_LED)) {
        // LED actions
    }
    if (timer.isTime(TIMER_SENSORS)) {
        // Sensor actions
    }
}
```
 
## Practical Usage
- **Robotics**: Manage motor control and sensor readings at different intervals.
- **Home Automation**: Control lights, temperature sensors, and other home automation tasks on a schedule.
- **Embedded Systems**: Implement non-blocking delays in embedded systems.

## Contributing
Contributions to the `ii_Timer` library are welcome. Please submit pull requests or open issues to suggest improvements or report bugs.

---

## License
This project is licensed under the GNU Lesser General Public License v3.0 (LGPL-3.0) - see the [LICENSE](LICENSE) file for details. The LGPL-3.0 is a popular open-source license that allows for both private and commercial use while ensuring that improvements to the library itself remain open-source. This license permits linking the `ii_Timer` library with other software that might not be under the LGPL, providing flexibility for a wide range of applications.

