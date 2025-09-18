#include <cstddef>
#include <string>
#include "bank_customer.h"

using namespace std;

class Buyer{
private:
    int id;
    string name;
    BankCustomer &account; 

public:
    Buyer(int id, const string& name, BankCustomer &account) : id(id), name(name), account(account) {};

    // Getters
    int getId() const { return id; }
    string getName() const { return name; }
   
    void setId(int newId) {
        id = newId;
    }
    void setName(const string& newName) {
        name = newName;
    }
    
};