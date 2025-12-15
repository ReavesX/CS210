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
    void PrintItemFrequency(Grocery& t_groceryList);

    void PrintFrequencyList(Grocery& t_groceryList);

    void PrintHistogram(Grocery& t_groceryList);

    // Exit Menu
    void Exit();
};

#endif  // DISPLAY_HPP
