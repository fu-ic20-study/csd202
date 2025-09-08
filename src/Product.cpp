#include "../lib/Product.h"

Product::Product(const string &n, double p, int q)
    : name(n), price(p), quantity(q) {}

string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getQuantity() const { return quantity; }

void Product::setPrice(double p) { price = p; }

void Product::printInfo() const
{
    cout << "Product: " << name
         << " | Price: " << price
         << " | Quantity: " << quantity << endl;
}
