#include "Display.hpp"

#include <algorithm>
#include <cctype>
#include <chrono>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <thread>

Display::Display() {
    // Default constructor
}

void Display::printOptions() {
    std::cout << "Menu Options:\n";
    std::cout << "1. Print Item Frequency\n";
    std::cout << "2. Print Frequency List\n";
    std::cout << "3. Print Histogram\n";
    std::cout << "4. Exit\n";
    std::cout << "\n" << std::endl;
}

void Display::PrintItemFrequency(Grocery& t_groceryList) {
    std::string item;
    std::cout << "Enter an item name: ";
    std::cin >> item;

    // Convert item to lowercase for output (make it not appear the same as input and force
    // lowercase)
    std::string itemLower = item;
    std::transform(itemLower.begin(), itemLower.end(), itemLower.begin(), ::tolower);

    std::cout << itemLower << " " << t_groceryList.GetFrequency(item) << std::endl;

    std::cout << "\n" << std::endl;
}

void Display::PrintFrequencyList(Grocery& t_groceryList) {
    for (const auto& pair : t_groceryList.GetFrequencyMap()) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
    std::cout << "\n" << std::endl;
}

void Display::PrintHistogram(Grocery& t_groceryList) {
    for (const auto& pair : t_groceryList.GetFrequencyMap()) {  // for each pair, print item name
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second;
             i++) {  // For each item convert number to asterisks by incrementing through i
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "\n" << std::endl;  // add a new line for visual spacing
}

void Display::Exit() {
    std::cout << "Goodbye!" << std::endl;

    // sleep for 2 seconds to give time for the message to be displayed
    std::this_thread::sleep_for(std::chrono::seconds(2));
}