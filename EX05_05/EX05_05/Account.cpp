#include<iostream>
#include<string>
#include"Account.h"
using namespace std;

Account :: Account(){
	name = "";
	id = 0;
	balance = 0;
	annualInterestRate = 1.5;
}
double Account::annualInterestRate = 0;
Account :: Account(string newname, int newid, double newbal){
	name = newname;
	id = newid;
	balance = newbal;

}
string Account :: getname(){
	return name;
}
int Account :: getid(){
	return id;
}
double Account :: getbalance(){
	return balance;
}

void Account :: withdraw(double amount){
	balance -= amount;
	transactions.push_back(Transaction('W', amount, balance, "Withdrawal"));
}

void Account :: deposit(double amount){
	balance += amount;
	transactions.push_back(Transaction('D', amount, balance, "Deposit"));
}

void Account::printinfo(){
	for (int i = 0; i < transactions.size(); i++){
		cout << transactions[i].gettype() << " ";
		cout << "$" << transactions[i].getamount() << " ";
		cout << "$" << transactions[i].getbalance() << " ";
		cout << transactions[i].getdescription() << " " << endl;
	}
}