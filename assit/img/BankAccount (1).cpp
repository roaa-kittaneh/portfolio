#include "BankAccount.h"
#include <iostream>

using namespace std;
BankAccount::BankAccount(int accNumber, double initialBalance)
    : accountNumber(accNumber), balance(initialBalance) {}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    }
    else {
        cout << "Insufficient funds." << endl;
    }
}

void BankAccount::displayAccountInfo() const {
    cout << "Account Number: " << accountNumber <<endl;
    cout << "Balance: $" << balance <<endl;
}

BankAccount BankAccount::operator+(const BankAccount& other) {
    return BankAccount(0, balance + other.balance);
}

BankAccount BankAccount::operator-(const BankAccount& other) {
    return BankAccount(0, balance - other.balance);
}
