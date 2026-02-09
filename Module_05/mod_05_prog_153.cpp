// Program 153: Rethrowing exception
#include <iostream>

using namespace std;
void divide(int a, int b) {
    try {
        if (b == 0) throw "Division by zero";
        else cout << "Result: " << a / b << endl;
    } catch (const char* msg) {
        cout << "Caught inside function: " << msg << endl;
        throw; // Rethrow
    }
}

int main() {
    try {
        divide(10, 0);
    } catch (const char* msg) {
        cout << "Caught inside main: " << msg << endl;
    }
    return 0;
}



