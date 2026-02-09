// Program 39: Program demonstrating pointers basic operations
#include <iostream>

using namespace std;
int main() {
    int var = 20;
    int *ptr;

    ptr = &var; // Store address of var in ptr

    cout << "Value of var: " << var << endl;
    cout << "Address of var (&var): " << &var << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    *ptr = 30; // Change value of var using pointer
    cout << "New value of var after *ptr = 30: " << var << endl;

    return 0;
}



