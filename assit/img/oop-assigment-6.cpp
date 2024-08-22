#include"SavingsAccount.h"

#include "CheckingAccount.h"

#include "Account.h"
int main(){


	//SavingsAccount savingsAccount(1001, 1000.0, 0.02);

	//CheckingAccount checkingAccount(2001, 500.0, 0.5);
	//
	//savingsAccount+500.00;//savingsAccount.deposit(500.00)

	//savingsAccount-200.00;//savingsAccount.withDraw(200.00)
	//
	//checkingAccount+300.00;//checkingAccount.deposit(300.00)
	//
	//checkingAccount-100.0;//checkingAccount.withDraw(100.00)
	//
	//cout << "Savings Account Info:" << std::endl;
	//savingsAccount.displayAccountInfo();
	//
	//cout << "\nChecking Account Info:" << std::endl;
	//checkingAccount.displayAccountInfo();


	Account account1(0, 5001);

	account1.displayAccountInfo();

	Account account2(0, 500);

	account2.displayAccountInfo();


	return 0;
}