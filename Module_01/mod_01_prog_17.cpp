// Program 17: Using conditional (ternary) operator
#include <iostream>

using namespace std;
int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Check if even or odd using ternary operator
    string result = (num % 2 == 0) ? "Even" : "Odd";

    cout << "The number " << num << " is " << result << "." << endl;

    return 0;
}



