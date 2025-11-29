/*
* Developer: Donald Jackson
* Date: November 29, 2025
* Purpose: Implement a display class with ability to update the display, showing the balance, deposit, and withdraw.
*/
#ifndef DISPLAY_HPP
#define DISPLAY_HPP

class Display {
    public:
        void updateDisplay();
        void showBalance();
        void showDeposit();
        void showWithdraw();e
        void showDepositHistory();
        void showWithdrawHistory();
};

#endif // DISPLAY_HPP