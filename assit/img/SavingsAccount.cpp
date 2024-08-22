#include "SavingsAccount.h"
#include <iostream>

using namespace std;
SavingsAccount::SavingsAccount(int accNumber, double initialBalance, double rate)
    : BankAccount(accNumber, initialBalance), interestRate(rate) {}

void SavingsAccount::displayAccountInfo() const {
    cout << "Account Type: Savings" << endl;
    BankAccount::displayAccountInfo();
    cout << "Interest Rate: " << interestRate << "%" <<endl;
}
