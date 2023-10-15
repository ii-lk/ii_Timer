#include "CODBOTS_Timer.h"

CODBOTS_Timer::CODBOTS_Timer() {
  active = false;
}

void CODBOTS_Timer::start(unsigned long interval, void (*callback)(), bool repeat) {
  this->interval = interval;
  this->callback = callback;
  this->repeat = repeat;
  previousMillis = millis();
  active = true;
}

void CODBOTS_Timer::update() {
  if (active) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      callback();
      if (!repeat) {
        stop();
      }
    }
  }
}

void CODBOTS_Timer::stop() {
  active = false;
}
