#include "bank_customer.h"
#include <iostream>
#include <vector>

using namespace std; ///
class Bank{
private:
    string name;
    vector<BankCustomer> Accounts{};
    int customerCount;

public:
    Bank(const string& name){
        this -> name = name;
        this -> customerCount = 0;
    }

    void addCustomer(const BankCustomer& customer) {
        Accounts.push_back(customer);
        customerCount++;
    }
};
