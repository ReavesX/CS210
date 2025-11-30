/*
* Developer: Donald Jackson
* Date: November 29, 2025
* Purpose: Define the Account class for managing investment data and calculations.
*/

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account {
    public:
        // Setters for investment details
        void setValues(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numberOfYears);

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

#endif // ACCOUNT_HPP