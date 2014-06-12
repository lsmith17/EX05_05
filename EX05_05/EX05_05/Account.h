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
	Account(){
		name = "";
		id = 0;
		balance = 0;
		annualInterestRate = 1.5;
	}
	Account(string newname, int newid, double newbal){
		name = newname;
		id = newid;
		balance = newbal;

	}
	string getname(){
		return name;
	}
	int getid(){
		return id;
	}
	double getbalance(){
		return balance;
	}

	void withdraw(double amount){
		balance -= amount;
		transactions.push_back(Transaction('W', amount, balance, "Withdrawal"));
	}

	void deposit(double amount){
		balance += amount;
		transactions.push_back(Transaction('D', amount, balance, "Deposit"));
	}

	void printinfo(){
		for (int i = 0; i < transactions.size(); i++){
			cout << transactions[i].gettype() << " ";
			cout << "$" << transactions[i].getamount() << " ";
			cout << "$" << transactions[i].getbalance() << " ";
			cout << transactions[i].getdescription() << " " << endl;
		}
	}
};
#endif