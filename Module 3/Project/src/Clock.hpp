/*
  Author: Donald Jackson
  File: Clock.hpp
  Purpose: Header file for the clock object file.
*/

#ifndef CLOCK_HPP
#define CLOCK_HPP

#include <string>

class Clock {
  public:
    Clock(int h, int m, int s);

    void addHour();  // adds 1 hour

    void addMinute();  // adds 1 minute

    void addSecond();  // adds 1 second

    std::string get12HourTime();  // gets the 12hr time
    std::string get24HourTime();  // gets the 24hr time

  private:
    int hours;
    int minutes;
    int seconds;
};

#endif