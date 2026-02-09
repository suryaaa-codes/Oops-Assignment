// Program 119: Online shopping cart (OOP)
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Item {
public:
    string name;
    double price;
    Item(string n, double p) : name(n), price(p) {}
};

class Cart {
    vector<Item> items;
public:
    void addItem(Item item) {
        items.push_back(item);
        cout << item.name << " added to cart." << endl;
    }

    void displayCart() {
        double total = 0;
        cout << "\n--- Shopping Cart ---" << endl;
        for (const auto& item : items) {
            cout << item.name << ": $" << item.price << endl;
            total += item.price;
        }
        cout << "Total: $" << total << endl;
    }
};

int main() {
    Cart myCart;
    myCart.addItem(Item("Laptop", 1000));
    myCart.addItem(Item("Mouse", 50));
    myCart.displayCart();

    return 0;
}



