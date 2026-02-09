// Program 16: Demonstrate increment/decrement
#include <iostream>

using namespace std;
int main() {
    int a = 10;

    cout << "Initial value: " << a << endl;

    cout << "Post-increment (a++): " << a++ << endl; // Prints 10, then a becomes 11
    cout << "After Post-increment: " << a << endl;

    cout << "Pre-increment (++a): " << ++a << endl; // a becomes 12, then prints 12
    cout << "After Pre-increment: " << a << endl;

    cout << "Post-decrement (a--): " << a-- << endl; // Prints 12, then a becomes 11
    cout << "After Post-decrement: " << a << endl;

    cout << "Pre-decrement (--a): " << --a << endl; // a becomes 10, then prints 10
    cout << "After Pre-decrement: " << a << endl;

    return 0;
}



