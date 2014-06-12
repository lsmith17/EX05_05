#include<iostream>
#include"Transaction.h"
using namespace std;

void Printinfo();
Transaction :: Transaction(){
	type = ' ';
	amount = 0;
	balance = 0;
	description = "";
}
Transaction :: Transaction(char newtype, double newamount, double newbalance, string newdescription){
	type = newtype;
	amount = newamount;
	balance = newbalance;
	description = newdescription;
}
char Transaction::gettype(){
	return type;
}
void Transaction :: settype(char type){
	this->type = type;
}
double Transaction :: getamount(){
	return amount;
}
void Transaction :: setamount(double amount){
	this->amount = amount;
}
double Transaction :: getbalance(){
	return balance;
}
void Transaction :: setbalance(double balance){
	this->balance = balance;
}
string Transaction :: getdescription(){
	return description;
}
void Transaction :: setdescription(string description){
	this->description = description;
}
