#include "../lib/Store.h"
#include <algorithm>
#include <iostream>
using namespace std;

void Store::addProduct(const string &name, double price, int quantity)
{
    products.push_back(make_shared<Product>(name, price, quantity));
    cout << "✔ Added product: " << name << endl;
}

void Store::updatePrice(const string &name, double newPrice)
{
    for (auto &prod : products)
    {
        if (prod->getName() == name)
        {
            prod->setPrice(newPrice);
            cout << "✔ Updated price of " << name
                 << " to " << newPrice << endl;
            return;
        }
    }
    cout << "✘ Product not found: " << name << endl;
}

void Store::listProducts() const
{
    cout << "\n--- Product List ---\n";
    for (const auto &prod : products)
    {
        prod->printInfo();
    }
}

void Store::sortByPrice()
{
    sort(products.begin(), products.end(),
         [](const shared_ptr<Product> &a, const shared_ptr<Product> &b)
         {
             return a->getPrice() < b->getPrice();
         });
    cout << "✔ Products sorted by price (ascending)\n";
}

void Store::printAllProducts() const
{
    cout << "\n--- Store Inventory ---\n";
    for (const auto &prod : products)
    {
        prod->printInfo();
    }
}
