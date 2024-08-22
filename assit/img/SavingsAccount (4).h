#pragma once
#include "BankAccount.h"
class SavingsAccount :
    public BankAccount{

public:

    SavingsAccount(long accountNumber = 0, double accountbalance = 0, double interestRate = 0);

    void displayAccountInfo();
private:
    double _interestRate;
};

