// Program 164: Uncaught exception
#include <iostream>
#include <exception>

using namespace std;
int main() {
    if (uncaught_exception()) {
        cout << "Uncaught exception exists." << endl;
    } else {
        cout << "No uncaught exception." << endl;
    }
    
    try {
        // throw 1; // Uncommenting this would cause uncaught exception logic if checked in destructor
    } catch (...) {}

    return 0;
}



