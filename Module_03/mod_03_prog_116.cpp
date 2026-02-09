// Program 116: Product inventory OOP model
#include <iostream>
#include <string>

using namespace std;
class Product {
    int id;
    string name;
    int quantity;
    double price;
public:
    void addProduct() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayProduct() {
        cout << "ID: " << id << ", Name: " << name << ", Qty: " << quantity << ", Price: " << price << endl;
    }
};

int main() {
    Product p;
    p.addProduct();
    p.displayProduct();

    return 0;
}



