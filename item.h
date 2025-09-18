#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    int id;
    std::string name;
    int quantity;
    double price;

public:
    Item() : id(0), name(""), quantity(0), price(0.0) {}
    Item(int id, const std::string& name, int quantity, double price)
        : id(id), name(name), quantity(quantity), price(price) {}

    // Getters
    int getId() const { return id; }
    std::string getName() const { return name; }
    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }

    // Setters
    void setId(int id) { this->id = id; }
    void setName(const std::string& name) { this->name = name; }
    void setQuantity(int quantity) { this->quantity = quantity; }
    void setPrice(double price) { this->price = price; }

    // Update methods based on id
    void updatePriceById(int searchId, double newPrice) {
        if (id == searchId) {
            price = newPrice;
        }
    }

    void updateQuantityById(int searchId, int newQuantity) {
        if (id == searchId) {
            quantity = newQuantity;
        }
    }

    void updateNameById(int searchId, const std::string& newName) {
        if (id == searchId) {
            name = newName;
        }
    }

    void updateAllById(int searchId, const std::string& newName, int newQuantity, double newPrice) {
        if (id == searchId) {
            name = newName;
            quantity = newQuantity;
            price = newPrice;
        }
    }
};

#endif // ITEM_H