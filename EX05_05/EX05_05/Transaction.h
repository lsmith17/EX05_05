#ifndef Transaction_H
#define Transaction_H

#include<iostream>
using namespace std;
class Transaction
{
private:
	char type;
	double amount;
	double balance;
	string description;
	Date date;

public:
	void Printinfo();
	Transaction(){
		type = ' ';
		amount = 0;
		balance = 0;
		description = "";
	}
	Transaction(char newtype, double newamount, double newbalance, string newdescription){
		type = newtype;
		amount = newamount;
		balance = newbalance;
		description = newdescription;
	}
	char gettype(){
		return type;
	}
	void settype(char type){
		this->type = type;
	}
	double getamount(){
		return amount;
	}
	void setamount(double amount){
		this->amount = amount;
	}
	double getbalance(){
		return balance;
	}
	void setbalance(double balance){
		this->balance = balance;
	}
	string getdescription(){
		return description;
	}
	void setdescription(string description){
		this->description = description;
	}
};
#endif
