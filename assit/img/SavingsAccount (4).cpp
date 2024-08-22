#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(long accountNumber, double accountbalance, double interestRate): BankAccount(accountNumber, accountbalance) {
	_interestRate = interestRate;
}

void SavingsAccount::displayAccountInfo(){
	cout << "savings account " << endl;
	BankAccount::displayAccountInfo();
	cout <<"the interest rate in this acount is : " << _interestRate << endl;
}
