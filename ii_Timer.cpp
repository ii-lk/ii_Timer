// ii_Timer.cpp

#include "ii_Timer.h"

Timer::Timer(unsigned long interval)
{
    timerInterval = interval;
}

bool Timer::isTime(bool onstart)
{
    if (previousMillis == 0 && onstart)
    {
        previousMillis = millis();
        return true;
    }
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= timerInterval)
    {
        previousMillis = currentMillis;
        return true;
    }
    return false;
}

void Timer::setTime(long time)
{
    timerInterval = time;
}

void Timer::reset()
{
    previousMillis = millis();
}

ii_Timer::ii_Timer()
{
    timers = nullptr;
    numTimers = 0;
}

void ii_Timer::addTimer(unsigned long interval)
{
    Timer *newTimers = new Timer[numTimers + 1];

    for (int i = 0; i < numTimers; i++)
    {
        newTimers[i] = timers[i];
    }

    newTimers[numTimers] = Timer(interval);

    delete[] timers;
    timers = newTimers;
    numTimers++;
}

bool ii_Timer::isTime(int timerId, bool onstart)
{
    if (timerId >= 0 && timerId < numTimers)
    {
        return timers[timerId].isTime(onstart);
    }
    return false;
}

void ii_Timer::setTime(int timerId, long time)
{
    if (timerId >= 0 && timerId < numTimers)
    {
        timers[timerId].setTime(time);
    }
}

void ii_Timer::reset(int timerId)
{
    if (timerId >= 0 && timerId < numTimers)
    {
        timers[timerId].reset();
    }
}
