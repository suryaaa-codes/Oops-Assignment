// Program 4: Swap two numbers without a third variable
#include <iostream>

using namespace std;
int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Before Swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping logic without third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After Swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}



