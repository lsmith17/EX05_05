#ifndef Transaction_H
#define Transaction_H
#include<iostream>
#include<vector>
#include"Date.h"
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
	Transaction();
	Transaction(char newtype, double newamount, double newbalance, string newdescription);
	char gettype();
	void settype(char type);
	double getamount();
	void setamount(double amount);
	double getbalance();
	void setbalance(double balance);
	string getdescription();
	void setdescription(string description);
};
#endif
