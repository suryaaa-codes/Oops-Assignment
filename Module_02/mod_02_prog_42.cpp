// Program 42: Private and public members
#include <iostream>

using namespace std;
class BankAccount {
private:
    double balance; // Private member

public:
    // Public method to set balance
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        } else {
            cout << "Invalid amount!" << endl;
            balance = 0;
        }
    }

    // Public method to get balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    
    // account.balance = 1000; // Error: balance is private

    account.setBalance(5000.50);
    cout << "Account Balance: " << account.getBalance() << endl;

    return 0;
}



