#pragma once
#include<iostream>
using namespace std;

class BankAccount{
public:
	BankAccount(long accountNumber=0,double accountbalance=0);
	void displayAccountInfo();
	void deposit(double moneyAmount);
	void withDraw(double moneyAmount);
	BankAccount & operator +(double moneyAmount);
	BankAccount& operator -(double moneyAmount);
protected:
	long _accountNumber;
	double _accountbalance;
};