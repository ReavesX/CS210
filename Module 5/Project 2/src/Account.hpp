/*
* Developer: Donald Jackson
* Date: November 29, 2025
* Purpose: Implement a bank account class with deposit, withdraw, and balance checking functionality.
*/

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account {
    public:
        void deposit();
        void withdraw();
        void checkBalance();
        void depositHistory();
        void withdrawHistory();
};

#endif // ACCOUNT_HPP