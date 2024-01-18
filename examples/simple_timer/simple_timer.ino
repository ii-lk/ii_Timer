#include <ii_Timer.h>

#define TIMER_MOTORS 0
#define TIMER_LED 1
#define TIMER_SENSORS 2

ii_Timer timer;

void setup() {
    Serial.begin(115200);
    
    // Add timers with their respective intervals
    timer.addTimer(100);   // Timer for motors with a 100ms interval
    timer.addTimer(500);   // Timer for LED with a 500ms interval
    timer.addTimer(1000);  // Timer for sensors with a 1000ms (1-second) interval
}

void loop() {
    if (timer.isTime(TIMER_MOTORS)) {
        Serial.println("TIME FOR MOTORS");
    }

    if (timer.isTime(TIMER_LED)) {
        Serial.println("TIME FOR LED");
    }

    if (timer.isTime(TIMER_SENSORS)) {
        Serial.println("TIME FOR SENSORS");
    }
}
