/*
    Author: Donald Jackson
    File: main.cpp
    Purpose: Instantiate a clock and update it according to user input

*/

#include <format>
#include <iostream>

#include "Clock.hpp"

void displayClock(Clock &myClock) {
  std::cout << "************************** **************************"
            << std::endl;
  std::cout << "*      12-Hour Clock     * *     24-Hour Clock      *"
            << std::endl;
  std::cout << "*                        * *                        *"
            << std::endl;
  std::cout << "*     " << myClock.get12HourTime() << "      * *       "
            << myClock.get24HourTime() << "         *" << std::endl;
  std::cout << "*                        * *                        *"
            << std::endl;
  std::cout << "************************** **************************"
            << std::endl;
}

void displayMenu() { // displays the menu.
  std::cout << "\n*****************\n";
  std::cout << "* 1. Add Second *\n";
  std::cout << "* 2. Add Minute *\n";
  std::cout << "* 3. Add Hour   *\n";
  std::cout << "* 4. Exit       *\n";
  std::cout << "*****************\n";
}

int main() {
  int hours, minutes, seconds, choice;

  std::cout << "Input your initial time in the following format: \"HH MM "
               "SS\". It is a 24 hour formatting for input."
            << std::endl;
  std::cin >> hours >> minutes >> seconds; // get initial time

  Clock myClock(hours, minutes,
                seconds); // construct my clock object from Clock.cpp

  while (choice != 4) {
    // display the clock.
    displayClock(myClock);

    // menu for adding time.
    displayMenu();

    // get choice for what to do next
    std::cin >> choice;

    // switch case since we have a single variable we are making choices off
    // of & the value only matters
    switch (choice) {
    case 1: // Add seconds to the clock
      myClock.addSecond();
      break;
    case 2: // Add minutes to the clock
      myClock.addMinute();
      break;
    case 3: // Add hours to the clock
      myClock.addHour();
      break;
    case 4: // break
      std::cout << "Program Ending..." << std::endl;
      break;
    default: // handles input that is not valid, i.e. 'a' or '15' or
             // '#!#$'
      std::cout << "Invalid choice." << std::endl;
      break;
    }
  }
}