#pragma once
#include"BankAccount.h"

class Account:public BankAccount{
public:
	Account(long accountNumber=0, double accountBalance=0, bool isRich=0): BankAccount(accountNumber, accountBalance){

		_isRich = accountBalance > 5000;
	}
	void displayAccountInfo() {
		if (_isRich) {
			BankAccount::displayAccountInfo();
		}
		else {
			cout << "this account is mfles";
		}
	}

private:
	bool _isRich;

};

