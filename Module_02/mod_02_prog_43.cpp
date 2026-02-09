// Program 43: Class member functions
#include <iostream>

using namespace std;
class Calculator {
public:
    // Member function defined inside class
    int add(int a, int b) {
        return a + b;
    }

    // Member function declaration
    int subtract(int a, int b);
};

// Member function defined outside class using scope resolution operator
int Calculator::subtract(int a, int b) {
    return a - b;
}

int main() {
    Calculator calc;
    int x = 10, y = 5;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;

    return 0;
}



