# Airgead Banking App Functional Requirements

## 1. Data Input Screen
Airgead Banking requires a screen to display the following information:
* **Initial Investment Amount:** The starting amount of your investment (must be a positive real number).
* **Monthly Deposit:** The amount you plan to contribute to the growth of your investment each month (must be a positive real number).
* **Annual Interest (Compounded):** Interest that is added to the principal sum of your investment and its previously accumulated interest.
* **Number of Years:** The number of years your investment has to grow.
* **Navigation:** A way to see the data (e.g., "Press any key to continue...").

The interface should display the user's input values after they are entered.

## 2. Static Reports
When the user continues, the console should display two static reports:
1. **Report 1:** Year-end balances and year-end earned interest *without* additional monthly deposits.
2. **Report 2:** Year-end balances and year-end earned interest *with* the additional monthly deposits submitted by the user.

*Note: The interface should allow the user to test different monthly deposit amounts, interest rates, and lengths of time to view the impact on investment growth.*

## 3. Calculation Logic
Your code must account for the following specific data points and formulas:

* **Month:** The number of months based on the user input in the "Number of Years" field.
* **Opening Amount:** The initial investment amount as well as the opening balance each month (which includes interest).
* **Deposited Amount:** The dollar amount the user plans to deposit each month (this value is consistent every month).
* **Total:** The sum of the *Opening Amount* and *Deposited Amount*.
* **Interest:** Money earned based on the "annual interest" rate input by the user.
    * **Formula:** `(Opening Amount + Deposited Amount) * ((Interest Rate/100)/12)`.
    * *Note: Dividing by 100 converts the percentage to a decimal. Dividing by 12 calculates monthly compounded interest.*
* **Closing Balance:** The sum of the *Total* and *Interest* amounts.

### Calculation Example
*Based on Initial Investment: $1.00, Monthly Deposit: $50.00, Interest: 5%

| Month | Opening Amount | Deposited Amount | $ Total | $ Interest | Closing Balance |
| :--- | :--- | :--- | :--- | :--- | :--- |
| 1 | 1.00 | 50.00 | 51.00 | 0.21 | 51.21 |
| 2 | 51.21 | 50.00 | 101.21 | 0.42 | 101.63 |
| 3 | 101.63 | 50.00 | 151.63 | 0.63 | 152.27 |

## 4. Banking Standards
The application must adhere to banking best practices and industry regulations. To ensure consistency and quality, you must follow the strict best practices rules provided in the "Airgead Banking Standards" document so that all written code is **transferable, readable, and reusable**.