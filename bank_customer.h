#include <string>

using namespace std;

class BankCustomer{
private:
    int id;
    string name;
    double balance;

public:
    BankCustomer(int id, const string& name, double balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    //getters
    int getId() const ;
    string getName() const ;
    double getBalance() const ;

    //setters
    bool withdraw(double amount);
    void BankCustomer::printinfo() const;
};