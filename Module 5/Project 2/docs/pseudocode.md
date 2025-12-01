# Airgead Banking App Pseudocode

```text
START Program

    FUNCTION main
        Initialize Account object named 'account'
        Initialize Display object named 'display'
        Initialize char variable 'choice' to 'y'

        WHILE 'choice' is equal to 'y' OR 'Y' DO
            CALL display.displayInputScreen(account)
            CALL display.displayYearEndReport(account)

            PRINT "Do you want to test another scenario? (y/n): "
            READ user input into 'choice'
            
            IGNORE remaining characters in input buffer
        END WHILE

        RETURN 0
    END FUNCTION

    CLASS Account 
        PRIVATE members:
            m_initialInvestment (double)
            m_monthlyDeposit (double)
            m_annualInterest (double)
            m_numberOfYears (integer)

        PUBLIC FUNCTION setValues(initialInvestment, monthlyDeposit, annualInterest, numberOfYears)
            SET m_initialInvestment = initialInvestment
            SET m_monthlyDeposit = monthlyDeposit
            SET m_annualInterest = annualInterest
            SET m_numberOfYears = numberOfYears
        END FUNCTION

        PUBLIC FUNCTION calculateBalance(years, withMonthlyDeposit)
            SET monthlyInterestRate = (m_annualInterest / 100.0) / 12.0
            SET totalAmount = m_initialInvestment

            IF withMonthlyDeposit is TRUE THEN
                SET monthlyDeposit = m_monthlyDeposit
            ELSE
                SET monthlyDeposit = 0.0
            END IF

            FOR i from 1 to (years * 12) DO
                ADD monthlyDeposit to totalAmount
                CALCULATE interest = totalAmount * monthlyInterestRate
                ADD interest to totalAmount
            END FOR

            RETURN totalAmount
        END FUNCTION

        PUBLIC FUNCTION calculateInterestEarned(years, withMonthlyDeposit)
            IF withMonthlyDeposit is TRUE THEN
                SET totalDeposits = m_monthlyDeposit * 12 * years
            ELSE
                SET totalDeposits = 0.0
            END IF

            SET balance = CALL calculateBalance(years, withMonthlyDeposit)
            RETURN balance - m_initialInvestment - totalDeposits
        END FUNCTION
    END CLASS

    CLASS Display =
        PUBLIC FUNCTION displayInputScreen(account)
            Initialize local variables: initialInvestment, monthlyDeposit, annualInterest, numberOfYears

            PRINT header lines

            PRINT "Initial Investment Amount: $"
            READ initialInvestment
            WHILE input is invalid OR initialInvestment < 0 DO
                PRINT "Invalid input. Please enter a positive number: $"
                CLEAR input buffer
                READ initialInvestment
            END WHILE

            PRINT "Monthly Deposit: $"
            READ monthlyDeposit
            WHILE input is invalid OR monthlyDeposit < 0 DO
                PRINT "Invalid input. Please enter a positive number: $"
                CLEAR input buffer
                READ monthlyDeposit
            END WHILE

            PRINT "Annual Interest: %"
            READ annualInterest
            WHILE input is invalid OR annualInterest < 0 DO
                PRINT "Invalid input. Please enter a positive number: %"
                CLEAR input buffer
                READ annualInterest
            END WHILE

            PRINT "Number of Years: "
            READ numberOfYears
            WHILE input is invalid OR numberOfYears <= 0 DO
                PRINT "Invalid input. Please enter a positive integer: "
                CLEAR input buffer
                READ numberOfYears
            END WHILE

            CALL account.setValues(initialInvestment, monthlyDeposit, annualInterest, numberOfYears)
            
            PRINT "Press any key to continue..."
            WAIT for user input
        END FUNCTION

        PUBLIC FUNCTION displayYearEndReport(account)
            GET years from account

            PRINT "Balance and Interest Without Additional Monthly Deposits"
            PRINT table header

            FOR i from 1 to years DO
                SET balance = CALL account.calculateBalance(i, FALSE)
                SET interest = CALL account.calculateInterestEarned(i, FALSE)
                CALL printDetails(i, balance, interest)
            END FOR

            PRINT "Balance and Interest With Additional Monthly Deposits"
            PRINT table header

            FOR i from 1 to years DO
                SET balance = CALL account.calculateBalance(i, TRUE)
                SET interest = CALL account.calculateInterestEarned(i, TRUE)
                CALL printDetails(i, balance, interest)
            END FOR
        END FUNCTION

        PRIVATE FUNCTION printDetails(year, yearEndBalance, interestEarned)
            PRINT formatted year, yearEndBalance, interestEarned
        END FUNCTION
    END CLASS

END Program
```