// ii_Timer.h

#ifndef ii_TIMER_H
#define ii_TIMER_H

#include <Arduino.h>

/**
 * @brief Simple timer class to manage time intervals.
 */
class Timer
{
public:
    /**
     * @brief Default constructor.
     *
     * @param interval The time interval for the timer in milliseconds. Default is 0.
     */
    Timer(unsigned long interval = 0);

    /**
     * @brief Checks if the specified time interval has elapsed.
     *
     * @param onstart If true, the timer starts from the beginning; if false, it continues from the last reset.
     * @return true if the interval has elapsed, false otherwise.
     */
    bool isTime(bool onstart);
    void setTime(long time);

    /**
     * @brief Resets the timer.
     */
    void reset();

private:
    long timerInterval;           ///< Time interval for the timer.
    unsigned long previousMillis; ///< Previous millis() value for time tracking.
};

/**
 * @brief Timer manager class to handle multiple timers.
 */
class ii_Timer
{
public:
    /**
     * @brief Default constructor.
     */
    ii_Timer();

    /**
     * @brief Adds a new timer with the specified interval.
     *
     * @param interval The time interval for the timer in milliseconds.
     */
    void addTimer(unsigned long interval);

    /**
     * @brief Checks if the specified timer's interval has elapsed.
     *
     * @param timerId The ID of the timer to check.
     * @param onstart If true, the timer starts from the beginning; if false, it continues from the last reset.
     * @return true if the interval has elapsed, false otherwise.
     */
    bool isTime(int timerId, bool onstart);
    void setTime(int timerId, long time);
    /**
     * @brief Resets the specified timer.
     *
     * @param timerId The ID of the timer to reset.
     */
    void reset(int timerId);

private:
    Timer *timers; ///< Array of Timer objects.
    int numTimers; ///< Number of timers.
};

#endif
