#include "Display.hpp"
#include "Grocery.hpp"

int main() {
    Display display;
    Grocery grocery;

    grocery.LoadData("../input/CS210_Project_Three_Input_File.txt");
    grocery.SaveData();

    int choice;
    while (choice != 4) {
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