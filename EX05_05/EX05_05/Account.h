#ifndef Account_H
#define Account_H
#include<iostream>
#include"Transaction.h"
#include<vector>
using namespace std;

class Account{
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<Transaction> transactions;
public:
	Account();
	Account(string newname, int newid, double newbal);
	string getname();
	int getid();
	double getbalance();
	void withdraw(double amount);
	void deposit(double amount);
	void printinfo();
};
#endif