// Program 152: Nested try-catch
#include <iostream>

using namespace std;
int main() {
    try {
        cout << "Outer try block" << endl;
        try {
            cout << "Inner try block" << endl;
            throw 10;
        } catch (int i) {
            cout << "Inner catch block: " << i << endl;
            throw; // Rethrow to outer
        }
    } catch (int i) {
        cout << "Outer catch block: " << i << endl;
    }
    return 0;
}



