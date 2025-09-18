#include "bank_customer.h"
#include <iostream>

using namespace std;

int BankCustomer::getId() const {
        return id;
    }

string BankCustomer::getName() const {
        return name;
    }

double BankCustomer::getBalance() const {
        return balance;
    }


bool BankCustomer::withdraw(double amount) {
   if (balance<=amount){
         return false;
    } 
    balance -= amount;
    return true;
}

void BankCustomer::printinfo() const {
    cout << "Customer ID: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Address: " << this->balance << endl;
}