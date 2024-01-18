#include <ii_Timer.h> // Include the ii_Timer library

#define TIMER_MOTORS 0 // Define timer ID for motors
#define TIMER_LED 1    // Define timer ID for LED
#define TIMER_SENSORS 2 // Define timer ID for sensors

ii_Timer timer; // Create a timer object

void setup() {
    Serial.begin(115200); // Initialize serial communication at 115200 baud rate
    
    // Add timers with their respective intervals
    timer.addTimer(TIMER_MOTORS,100);   // Add a timer for motors with a 100ms interval
    timer.addTimer(TIMER_LED,500);      // Add a timer for LED with a 500ms interval
    timer.addTimer(TIMER_SENSORS,1000); // Add a timer for sensors with a 1000ms (1-second) interval
}

void loop() {
    // Check if it's time for the motors to act
    if (timer.isTime(TIMER_MOTORS)) {
        // Motor-related actions here
        Serial.println("TIME FOR MOTORS");
    }

    // Check if it's time to update the LED
    if (timer.isTime(TIMER_LED)) {
        // LED-related actions here
        Serial.println("TIME FOR LED");
    }

    // Check if it's time to read sensors
    if (timer.isTime(TIMER_SENSORS)) {
        // Sensor-related actions here
        Serial.println("TIME FOR SENSORS");
    }
}
