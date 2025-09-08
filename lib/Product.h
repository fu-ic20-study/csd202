#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;

public:
    Product(const string &n, double p, int q);

    string getName() const;
    double getPrice() const;
    int getQuantity() const;

    void setPrice(double p);
    void printInfo() const;
};

#endif
