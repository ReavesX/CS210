#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <iostream>
#include <map>
#include <string>

#include "Grocery.hpp"

class Display {
   public:
    Display();  // default constructor

    // Print specific item's frequency.
    int PrintItemFrequency(Grocery item);

    void PrintFrequencyList(Grocery list);

    void PrintHistogram(std::map<std::string, int> list);

    // Exit Menu
    int Exit();
};

#endif  // DISPLAY_HPP
