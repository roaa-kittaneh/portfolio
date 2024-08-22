#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountInfo() const;

    BankAccount operator+(const BankAccount& other);
    BankAccount operator-(const BankAccount& other);
};

#endif // BANKACCOUNT_H
