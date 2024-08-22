#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

class CheckingAccount : public BankAccount {
private:
    double transactionFee;

public:
    CheckingAccount(int accNumber, double initialBalance, double fee);
    void displayAccountInfo() const;
};

#endif // CHECKINGACCOUNT_H
