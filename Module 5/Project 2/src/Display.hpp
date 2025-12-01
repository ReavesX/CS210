/*
 * Developer: Donald Jackson
 * Date: November 29, 2025
 * Purpose: Define the Display class for handling user input and outputting investment reports.
 */

#ifndef AIRGEAD_BANKING_PROJECT_SRC_DISPLAY_H_
#define AIRGEAD_BANKING_PROJECT_SRC_DISPLAY_H_

#include "Account.hpp"

class Display {
   public:
    void displayInputScreen(Account& t_account);
    void displayYearEndReport(Account& t_account);

   private:
    void printDetails(int t_year, double t_yearEndBalance, double t_interestEarned);
};

#endif  // AIRGEAD_BANKING_PROJECT_SRC_DISPLAY_H_