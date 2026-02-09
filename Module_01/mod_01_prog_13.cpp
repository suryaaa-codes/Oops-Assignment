// Program 13: Demonstrate logical operators
#include <iostream>

using namespace std;
int main() {
    bool x = true;
    bool y = false;

    cout << boolalpha;

    cout << "x: " << x << ", y: " << y << endl;
    cout << "Logical AND (x && y): " << (x && y) << endl;
    cout << "Logical OR (x || y): " << (x || y) << endl;
    cout << "Logical NOT (!x): " << (!x) << endl;
    cout << "Logical NOT (!y): " << (!y) << endl;

    return 0;
}



