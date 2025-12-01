/*
 * Developer: Donald Jackson
 * Date: November 29, 2025
 * Purpose: Define the Account class for managing investment data and calculations.
 */

#ifndef AIRGEAD_BANKING_PROJECT_SRC_ACCOUNT_H_
#define AIRGEAD_BANKING_PROJECT_SRC_ACCOUNT_H_

class Account {
   public:
    // Setters for investment details
    /**
     * @brief Sets the values of the account
     *
     * @param t_initialInvestment The initial investment amount
     * @param t_monthlyDeposit The monthly deposit amount
     * @param t_annualInterest The annual interest rate
     * @param t_numberOfYears The number of years
     */
    void setValues(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest,
                   int t_numberOfYears);

    // Getters
    double getInitialInvestment() const;
    double getMonthlyDeposit() const;
    double getAnnualInterest() const;
    int getNumberOfYears() const;

    // Calculation methods
    double calculateBalance(int t_years, bool t_withMonthlyDeposit);
    double calculateInterestEarned(int t_years, bool t_withMonthlyDeposit);

   private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterest;
    int m_numberOfYears;
};

#endif  // AIRGEAD_BANKING_PROJECT_SRC_ACCOUNT_H_