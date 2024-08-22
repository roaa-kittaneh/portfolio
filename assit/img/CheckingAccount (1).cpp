#include "CheckingAccount.h"
#include <iostream>


CheckingAccount::CheckingAccount(int accNumber, double initialBalance, double fee)
    : BankAccount(accNumber, initialBalance), transactionFee(fee) {}

void CheckingAccount::displayAccountInfo() const {
    std::cout << "Account Type: Checking" << std::endl;
    BankAccount::displayAccountInfo();
    std::cout << "Transaction Fee: $" << transactionFee << std::endl;
}
