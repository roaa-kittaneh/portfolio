#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {
    SavingsAccount savingsAccount(1001, 1000.0, 0.02);
    CheckingAccount checkingAccount(2001, 500.0, 0.5);

    savingsAccount.deposit(500.0);
    savingsAccount.withdraw(200.0);
    checkingAccount.deposit(300.0);
    checkingAccount.withdraw(100.0);

    cout << "Savings Account Info:" << endl;
    savingsAccount.displayAccountInfo();
    cout << "\nChecking Account Info:" << endl;
    checkingAccount.displayAccountInfo();

    // Demonstrate operator overloading
    BankAccount combined = savingsAccount + checkingAccount;
    cout << "\nCombined Account Info:" << endl;
    combined.displayAccountInfo();

    return 0;
}
