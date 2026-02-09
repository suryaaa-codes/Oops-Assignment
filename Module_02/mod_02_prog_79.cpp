// Program 79: Information hiding
#include <iostream>

using namespace std;
class Account {
private:
    double balance; // Hidden data

public:
    Account() { balance = 0; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    // Only way to access balance is through this method
    double getBalance() {
        return balance;
    }
};

int main() {
    Account acc;
    acc.deposit(1000);
    // acc.balance = 5000; // Error: Cannot access private member
    cout << "Current Balance: " << acc.getBalance() << endl;

    return 0;
}



