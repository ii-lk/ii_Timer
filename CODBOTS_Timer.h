// CODBOTS_Timer.h

#ifndef CODBOTS_TIMER_H
#define CODBOTS_TIMER_H

#include <Arduino.h>

class Timer {
public:
    Timer(unsigned long interval = 0); // Default constructor

    bool isTime(bool onstart);
    void reset();

private:
    unsigned long timerInterval;
    unsigned long previousMillis;
};

class CODBOTS_Timer {
public:
    CODBOTS_Timer();

    void addTimer(unsigned long interval);
    bool isTime(int timerId,bool onstart);
    void reset(int timerId);

private:
    Timer *timers;
    int numTimers;
};

#endif
