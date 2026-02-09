// Program 18: Evaluate an algebraic expression
#include <iostream>

using namespace std;
int main() {
    // Evaluate expression: ax^2 + bx + c
    float a, b, c, x;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    cout << "Enter value for x: ";
    cin >> x;

    float result = (a * x * x) + (b * x) + c;

    cout << "Result of " << a << "x^2 + " << b << "x + " << c << " for x=" << x << " is: " << result << endl;

    return 0;
}



