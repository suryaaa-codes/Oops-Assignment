// Program 115: Customer billing system
#include <iostream>
#include <string>

using namespace std;
class Customer {
    string name;
    long phone;
    double billAmount;
public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Phone: ";
        cin >> phone;
        cout << "Enter Bill Amount: ";
        cin >> billAmount;
    }

    void printBill() {
        cout << "\n--- Bill ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
        cout << "Amount: $" << billAmount << endl;
    }
};

int main() {
    Customer c;
    c.getData();
    c.printBill();

    return 0;
}



