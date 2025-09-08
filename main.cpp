#include <iostream>
#include "./lib/Store.h"
using namespace std;

int main()
{
    Store store;
    int choice;

    do
    {
        cout << "\n===== Orders Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Update Product Price\n";
        cout << "3. List Products\n";
        cout << "4. Sort Products by Price\n";
        cout << "5. Print All Products\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;
            double price;
            int qty;
            cout << "Enter product name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter quantity: ";
            cin >> qty;
            store.addProduct(name, price, qty);
        }
        else if (choice == 2)
        {
            string name;
            double newPrice;
            cout << "Enter product name to update: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter new price: ";
            cin >> newPrice;
            store.updatePrice(name, newPrice);
        }
        else if (choice == 3)
        {
            store.listProducts();
        }
        else if (choice == 4)
        {
            store.sortByPrice();
        }
        else if (choice == 5)
        {
            store.printAllProducts();
        }

    } while (choice != 0);

    cout << "Exiting program. Goodbye!\n";
    return 0;
}
