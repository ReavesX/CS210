/*
* Developer: Donald Jackson
* Date: November 29, 2025
* Purpose: Implement the Display class methods for user interaction and reporting.
*/

#include "Display.hpp"
#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

void Display::displayInputScreen(Account& t_account) {
    double initialInvestment = 0.0;
    double monthlyDeposit = 0.0;
    double annualInterest = 0.0;
    int numberOfYears = 0;

    cout << "**********************************" << endl;

    // Get Initial Investment Amount
    cout << "Initial Investment Amount: $";
    while (!(cin >> initialInvestment) || initialInvestment < 0) {
        cout << "Invalid input. Please enter a positive number: $";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    }

    // Get Monthly Deposit
    cout << "Monthly Deposit: $";
    while (!(cin >> monthlyDeposit) || monthlyDeposit < 0) { // loop while input is not a number or is negative
        cout << "Invalid input. Please enter a positive number: $";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    }

    // Get Annual Interest
    cout << "Annual Interest: %";
    while (!(cin >> annualInterest) || annualInterest < 0) { // loop while input is not a number or is negative
        cout << "Invalid input. Please enter a positive number: %";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    }

    // Get Number of Years
    cout << "Number of Years: ";
    while (!(cin >> numberOfYears) || numberOfYears <= 0) { // loop while input is not a number or is negative
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    }

    // Set values in the account object
    t_account.setValues(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);

    cout << "Press any key to continue..." << endl;
    // Clear buffer and wait for input
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    cin.get();
}

void Display::displayYearEndReport(Account& t_account) {
    int years = t_account.getNumberOfYears();

    // Report 1: Without additional monthly deposits
    cout << endl;
    cout << "     Balance and Interest Without Additional Monthly Deposits" << endl;
    cout << "==========================================================================" << endl;
    cout << "  Year        Year End Balance     Year End Earned Interest" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    for (int i = 1; i <= years; ++i) {
        double balance = t_account.calculateBalance(i, false);
        double interest = t_account.calculateInterestEarned(i, false);
        printDetails(i, balance, interest);
    } // print all year end balances and interest without monthly deposits
    
    // Report 2: With additional monthly deposits
    cout << endl;
    cout << "      Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "==========================================================================" << endl;
    cout << "  Year        Year End Balance     Year End Earned Interest" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    for (int i = 1; i <= years; ++i) {
        double balance = t_account.calculateBalance(i, true);
        double interest = t_account.calculateInterestEarned(i, true);
        printDetails(i, balance, interest);
    } // print all year end balances and interest with monthly deposits
    cout << endl;
}

void Display::printDetails(int t_year, double t_yearEndBalance, double t_interestEarned) {
    cout << right << setw(6) << t_year 
         << fixed << setprecision(2) 
         << setw(24) << "$" << t_yearEndBalance 
         << setw(28) << "$" << t_interestEarned << endl;
} // print year end balance and interest