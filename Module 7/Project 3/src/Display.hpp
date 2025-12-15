#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <iostream>
#include <map>
#include <string>

#include "Grocery.hpp"

class Display {
   public:
    /**
     * @brief Default constructor for the Display class.
     */
    Display();  // default constructor

    /**
     * @brief Displays the main menu options to the user.
     */
    void printOptions();

    /**
     * @brief Prompts the user for an item and prints its frequency.
     *
     * @param t_groceryList Reference to the Grocery object containing data.
     */
    void PrintItemFrequency(Grocery& t_groceryList);

    /**
     * @brief Prints the complete list of items and their frequencies.
     *
     * @param t_groceryList Reference to the Grocery object containing data.
     */
    void PrintFrequencyList(Grocery& t_groceryList);

    /**
     * @brief Prints a histogram representing item frequencies.
     *
     * Displays asterisks (*) corresponding to the count of each item.
     *
     * @param t_groceryList Reference to the Grocery object containing data.
     */
    void PrintHistogram(Grocery& t_groceryList);

    /**
     * @brief Displays an exit message and terminates the program flow.
     */
    void Exit();
};

#endif  // DISPLAY_HPP
