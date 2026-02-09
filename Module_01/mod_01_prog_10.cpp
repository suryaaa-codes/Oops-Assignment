// Program 10: Demonstrate type casting
#include <iostream>

using namespace std;
int main() {
    // Implicit conversion
    int numInt = 10;
    double numDouble = numInt; // int to double
    cout << "Implicit Casting (int to double): " << numDouble << endl;

    char ch = 'A';
    int asciiVal = ch; // char to int
    cout << "Implicit Casting (char to int): " << asciiVal << endl;

    // Explicit conversion (C-style)
    double pi = 3.14159;
    int intPi = (int)pi;
    cout << "Explicit Casting (C-style, double to int): " << intPi << endl;

    // Explicit conversion (C++ style - static_cast)
    float floatNum = 5.75;
    int intNum = static_cast<int>(floatNum);
    cout << "Explicit Casting (static_cast, float to int): " << intNum << endl;

    return 0;
}



