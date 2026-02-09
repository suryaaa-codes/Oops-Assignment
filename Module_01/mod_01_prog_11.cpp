// Program 11: Demonstrate arithmetic operators
#include <iostream>

using namespace std;
int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "Addition (a + b): " << (a + b) << endl;
    cout << "Subtraction (a - b): " << (a - b) << endl;
    cout << "Multiplication (a * b): " << (a * b) << endl;
    
    if (b != 0) {
        cout << "Division (a / b): " << (a / b) << endl;
        cout << "Modulus (a % b): " << (a % b) << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}



