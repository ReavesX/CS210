/*
* Developer: Donald Jackson
* Date: November 29, 2025
* Purpose: Main driver for the Airgead Banking Investment Calculator.
*/

#include "Account.hpp"
#include "Display.hpp"
#include <iostream>
#include <limits>

using namespace std;


int main() {
    Account account;
    Display display;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        // 1. Display Data Input Screen
        display.displayInputScreen(account);

        // 2. Display Static Reports
        display.displayYearEndReport(account);

        // 3. Ask to continue
        cout << "Do you want to test another scenario? (y/n): ";
        cin >> choice;
        
        // Clear the input buffer to prevent issues in the next iteration
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return 0;
}
