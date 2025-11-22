/*
  Author: Donald Jackson
  File: Clock.cpp
  Purpose: Clock.cpp creates the Clock Object. It allows for all necessary
  functions for the project -- instantiating a clock, adding hours, minutes, and
  seconds, and formatting it in both 12 and 24 hour time formats.
*/

#include "Clock.hpp"

#include <format>  // Include for std::format

Clock::Clock(int h, int m, int s) {
    // The whole purpose of this constructor is to allow for any 3 numbers to be
    // converted to 'hh mm ss' format. Using longs allows for less issues when
    // the numbers get exteremly large here. we get the total number of seconds
    // by simply multiplying them out by the number of seconds in for example an
    // hour or minute.
    long long totalSeconds = (3600LL * h) + (60LL * m) + (s);
    const long long secondsInDay = 86400LL;

    // total seconds can be derived by first using a modulo to give the
    // remainder, but this could be negative so we need to normalize it. so
    // adding the number of seconds in the day after doing the modulo prevents
    // it negative values, but causes shifting. the last modulo secondsInDay
    // allows us to confine the boundary to [0, secondsInDay)
    totalSeconds = (totalSeconds % secondsInDay + secondsInDay) % secondsInDay;

    hours = totalSeconds / 3600;           // number of hours for display
    minutes = (totalSeconds % 3600) / 60;  // number of minutes for display
    seconds = totalSeconds % 60;           // number of seconds for display
}

void Clock::addHour() {
    hours++;
    if (hours >= 24) {
        hours = 0;  // reset the hours if the count hits 24.
    }
}

void Clock::addMinute() {
    minutes++;
    if (minutes >= 60) {
        minutes = 0;  // reset the minutes if it hits 60.
        addHour();    // add one hour.
    }
}

void Clock::addSecond() {
    seconds++;
    if (seconds >= 60) {
        seconds = 0;  // reset seconds
        addMinute();  // add a minute
    }
}

std::string Clock::get12HourTime() {
    /*
    I start by deciding the displayHour based off the clock's hours, modifying
    the clock's hours directly seemed dangerous to do for encapsulation
    purposes. Starting off with the meridiem  being in A.M. by default
    */
    int displayHour = hours;
    std::string meridiem = "A.M.";  // Default to A.M.

    // if hours is 00:00:00 in global time we should display 12 in the hours
    // collumn, otherwise 12:00:00 is PM, and anything after 12 gets adjusted.
    if (hours == 0) {
        displayHour = 12;  // 00:00 is 12 A.M.
    } else if (hours == 12) {
        meridiem = "P.M.";  // 12:00 is 12 P.M.
    } else if (hours > 12) {
        meridiem = "P.M.";
        displayHour -= 12;  // Convert 13-23 to 1-11 P.M.
    }

    std::string time = std::format("{:02}:{:02}:{:02} {}", displayHour, minutes,
                                   seconds, meridiem);

    return time;
}

/*
    Using STD::Format() allows me to have strings similar to how python
   leverages f-strings to allow for inline formatting of a string, and allows me
   to easily limit the number of places as well as insert my variables into a
   single formatted string.
*/
std::string Clock::get24HourTime() {
    std::string time =
        std::format("{:02}:{:02}:{:02}", hours, minutes, seconds);
    return time;
}