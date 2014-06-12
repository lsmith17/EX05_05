#include<iostream>
#include<vector>
#include"Account.h"
#include"Transaction.h"
#include"Date.h"
using namespace std;

int main(){

Account A1("George", 1122, 1000);
A1.deposit(30);
A1.deposit(40);
A1.deposit(50);
A1.withdraw(5);
A1.withdraw(4);
A1.withdraw(2);

cout << "Account Name: " << A1.getname() << endl;
cout << "ID #" << A1.getid() << endl;
cout << "Balance: $" << A1.getbalance() << endl << endl;

cout << "Transactions" << endl;

A1.printinfo();

return 0;
}