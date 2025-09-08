#ifndef STORE_H
#define STORE_H

#include <vector>
#include <memory>
#include "Product.h"
using namespace std;

class Store
{
private:
    vector<shared_ptr<Product>> products;

public:
    void addProduct(const string &name, double price, int quantity);
    void updatePrice(const string &name, double newPrice);
    void listProducts() const;
    void sortByPrice();
    void printAllProducts() const;
};

#endif
