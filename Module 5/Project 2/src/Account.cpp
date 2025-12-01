/*
 * Developer: Donald Jackson
 * Date: November 29, 2025
 * Purpose: Implement the Account class methods for investment calculation.
 */

#include "Account.hpp"

#include <vector>

/**
 * @brief Sets the values of the account
 *
 * @param t_initialInvestment The initial investment amount
 * @param t_monthlyDeposit The monthly deposit amount
 * @param t_annualInterest The annual interest rate
 * @param t_numberOfYears The number of years
 */
void Account::setValues(double t_initialInvestment, double t_monthlyDeposit,
                        double t_annualInterest, int t_numberOfYears) {
    m_initialInvestment = t_initialInvestment;
    m_monthlyDeposit = t_monthlyDeposit;
    m_annualInterest = t_annualInterest;
    m_numberOfYears = t_numberOfYears;
}

/**
 * @brief Gets the initial investment amount
 *
 * @return The initial investment amount
 */
double Account::getInitialInvestment() const { return m_initialInvestment; }

/**
 * @brief Gets the monthly deposit amount
 *
 * @return The monthly deposit amount
 */
double Account::getMonthlyDeposit() const { return m_monthlyDeposit; }

/**
 * @brief Gets the annual interest rate
 *
 * @return The annual interest rate
 */
double Account::getAnnualInterest() const { return m_annualInterest; }

/**
 * @brief Gets the number of years
 *
 * @return The number of years
 */
int Account::getNumberOfYears() const { return m_numberOfYears; }

/**
 * @brief Calculates the balance of the account
 *
 * @param t_years The number of years
 * @param t_withMonthlyDeposit Whether to include monthly deposits in the calculation
 * @return The balance of the account
 */
double Account::calculateBalance(int t_years, bool t_withMonthlyDeposit) {
    double monthlyInterestRate = (m_annualInterest / 100.0) / 12.0;
    double totalAmount = m_initialInvestment;

    // Determine the monthly deposit amount based on the flag (true or false)
    double monthlyDeposit = t_withMonthlyDeposit ? m_monthlyDeposit : 0.0;

    for (int i = 1; i <= t_years * 12; i++) {
        totalAmount += monthlyDeposit;
        totalAmount += totalAmount * monthlyInterestRate;
    }

    return totalAmount;
}

/**
 * @brief Calculates the interest earned on the account
 *
 * @param t_years The number of years
 * @param t_withMonthlyDeposit Whether to include monthly deposits in the calculation
 * @return The interest earned on the account
 */
double Account::calculateInterestEarned(int t_years, bool t_withMonthlyDeposit) {
    double totalDeposits = t_withMonthlyDeposit ? (m_monthlyDeposit * 12 * t_years) : 0.0;
    return calculateBalance(t_years, t_withMonthlyDeposit) - m_initialInvestment - totalDeposits;
}