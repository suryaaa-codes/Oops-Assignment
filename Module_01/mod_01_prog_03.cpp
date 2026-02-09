// Program 3: Swap two numbers using a third variable
#include <iostream>

using namespace std;
int main() {
    int num1, num2, temp;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Before Swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping logic using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After Swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}



