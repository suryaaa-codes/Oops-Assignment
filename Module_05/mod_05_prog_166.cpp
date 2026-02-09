// Program 166: Stack unwinding
#include <iostream>

using namespace std;
void f1() {
    cout << "f1 start" << endl;
    throw 100;
    cout << "f1 end" << endl; // Will not execute
}

void f2() {
    cout << "f2 start" << endl;
    f1();
    cout << "f2 end" << endl; // Will not execute
}

int main() {
    try {
        f2();
    } catch (int i) {
        cout << "Caught in main: " << i << endl;
    }
    return 0;
}



