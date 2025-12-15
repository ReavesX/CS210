#include "Display.hpp"

#include <chrono>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <thread>

Display::PrintItemFrequency(Grocery& t_groceryList) {
    // print item frequency of a specific item
}

Display::PrintFrequencyList(Grocery& t_groceryList) {
    // print frequency list of all items
}

Display::PrintHistogram(Grocery& t_groceryList) {
    // print histogram of all items frequencies
}

Display::Exit() {
    // print exit message
    std::cout << "Goodbye!" << std::endl;

    // sleep for 2 seconds to give time for the message to be displayed
    std::this_thread::sleep_for(std::chrono::seconds(2));
}