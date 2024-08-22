#pragma once
#include "BankAccount.h"
class CheckingAccount :
    public BankAccount{
public:
    CheckingAccount(long accountNumber = 0, double balance = 0, double transactionFee=0);
    void displayAccountInfo();
private:
    double _transactionFee;
};

