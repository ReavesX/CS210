#include <limits>

#include "Display.hpp"
#include "Grocery.hpp"

/**
 * @brief Main entry point for the Corner Grocer Item Tracking Program.
 *
 * Initializes the Grocery and Display objects, loads data, creates a backup,
 * and runs the interactive menu loop.
 *
 * @return int Exit status code.
 */
int main() {
    Display display;
    Grocery grocery;

    grocery.LoadData("../input/CS210_Project_Three_Input_File.txt");
    grocery.SaveData();

    int choice = 0;
    while (choice != 4) {
        display.printOptions();

        if (!(std::cin >> choice)) {
            std::cout << "Invalid choice. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            choice = 0;  // reset choice to 0
        }

        switch (choice) {
            case 1:
                display.PrintItemFrequency(grocery);
                break;
            case 2:
                display.PrintFrequencyList(grocery);
                break;
            case 3:
                display.PrintHistogram(grocery);
                break;
            case 4:
                display.Exit();
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }
}