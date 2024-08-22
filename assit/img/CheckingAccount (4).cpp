#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(long accountNumber, double balance, double transactionFee):BankAccount(accountNumber, balance){
	_transactionFee = transactionFee;
}
void CheckingAccount::displayAccountInfo() {
	cout << "Checking Account " << endl;
	BankAccount::displayAccountInfo();
	cout << "the transaction fee in this acount is : " << _transactionFee << endl;
}