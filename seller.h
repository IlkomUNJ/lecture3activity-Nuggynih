#include "buyer.h"
#include "item.h"
#include <vector>
#include <iostream>

using namespace std;

class seller : public Buyer {
    private:
        BankCustomer BankCustomerid;
        vector<Item> Stock;

    public:
        seller(int id, const string& name, BankCustomer &account, BankCustomer BankCustomerid)
            : Buyer(id, name, account), BankCustomerid(BankCustomerid) {}

        // Getter for BankCustomerid
        BankCustomer getBankCustomerId() const {
            return BankCustomerid;
        }

        // Setter for BankCustomerid
        void setBankCustomerId(const BankCustomer& newBankCustomerId) {
            BankCustomerid = newBankCustomerId;
        }

        // Method to add an item to stock
        void addItemToStock(const Item& item) {
            Stock.push_back(item);
        }

        // Method to remove an item from stock by id
        bool removeItemFromStock(int itemId) {
            for (auto it = Stock.begin(); it != Stock.end(); ++it) {
                if (it->getId() == itemId) {
                    Stock.erase(it);
                    return true; // Item found and removed
                }
            }
            return false; // Item not found
        }

        // Method to display all items in stock
        void displayStock() const {
            cout << "Stock items:" << endl;
            for (const auto& item : Stock) {
                cout << "ID: " << item.getId()
                     << ", Name: " << item.getName()
                     << ", Quantity: " << item.getQuantity()
                     << ", Price: " << item.getPrice() << endl;
            }
        }
};