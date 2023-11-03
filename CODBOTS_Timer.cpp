// CODBOTS_Timer.cpp

#include "CODBOTS_Timer.h"

Timer::Timer(unsigned long interval) {
    timerInterval = interval;
}

bool Timer::isTime(bool onstart) {
    if(previousMillis==0 && onstart){
        previousMillis = millis();
        return true;
    }
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= timerInterval) {
        previousMillis = currentMillis;
        return true;
    }
    return false;
}

void Timer::reset() {
    previousMillis = millis();
}

CODBOTS_Timer::CODBOTS_Timer() {
    timers = nullptr;
    numTimers = 0;
}

void CODBOTS_Timer::addTimer(unsigned long interval) {
    Timer *newTimers = new Timer[numTimers + 1];
    
    for (int i = 0; i < numTimers; i++) {
        newTimers[i] = timers[i];
    }

    newTimers[numTimers] = Timer(interval);

    delete[] timers;
    timers = newTimers;
    numTimers++;
}

bool CODBOTS_Timer::isTime(int timerId,bool onstart) {
    if (timerId >= 0 && timerId < numTimers) {
        return timers[timerId].isTime(onstart);
    }
    return false;
}

void CODBOTS_Timer::reset(int timerId) {
    if (timerId >= 0 && timerId < numTimers) {
        timers[timerId].reset();
    }
}
