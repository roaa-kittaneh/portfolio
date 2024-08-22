#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNumber, double initialBalance, double rate);
    void displayAccountInfo() const;
};

#endif // SAVINGSACCOUNT_H
