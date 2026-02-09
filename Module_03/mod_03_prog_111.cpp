// Program 111: Bank account system (OOP)
#include <iostream>
#include <string>

using namespace std;
class BankAccount {
    string name;
    long accNum;
    string type;
    double balance;

public:
    void initialize() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter Account Type: ";
        cin >> type;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited. New Balance: " << balance << endl;
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn. Remaining Balance: " << balance << endl;
        }
    }

    void display() {
        cout << "\nName: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.initialize();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}



