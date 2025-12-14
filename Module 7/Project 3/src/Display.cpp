#include "Display.hpp"

#include <chrono>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <thread>

Display::PrintItemFrequency() {
    // print item frequency of a specific item

    // return 0 to exit the program
    return 0;
}

Display::PrintFrequencyList() {
    // print frequency list of all items

    // return 0 to exit the program
    return 0;
}

Display::PrintHistogram() {
    // print histogram of all items frequencies

    // return 0 to exit the program
    return 0;
}

Display::Exit() {
    // print exit message
    std::cout << "Goodbye!" << std::endl;

    // sleep for 2 seconds to give time for the message to be displayed
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // return 0 to exit the program
    return 0;
}