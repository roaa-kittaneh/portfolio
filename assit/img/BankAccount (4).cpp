#include "BankAccount.h"

BankAccount::BankAccount(long accountNumber, double balance):_accountbalance(balance),_accountNumber(accountNumber){}

void BankAccount::displayAccountInfo(){
	cout << "your account number is : " << _accountNumber << endl;
	cout << "your balance is : " << _accountbalance << endl;

}

void BankAccount::deposit(double moneyAmount){
	_accountbalance += moneyAmount;
}

void BankAccount::withDraw(double moneyAmount){
	_accountbalance -= moneyAmount;
}

BankAccount& BankAccount::operator+(double moneyAmount)
{
	deposit(moneyAmount);
	return *this;
}

BankAccount& BankAccount::operator-(double moneyAmount){
	withDraw(moneyAmount);
	return *this;
}
