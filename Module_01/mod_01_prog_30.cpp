// Program 30: Program to show use of goto
#include <iostream>

using namespace std;
int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0) {
        goto error; // Jump to error label
    }

    cout << "You entered: " << num << endl;
    return 0; // Exit program successfully

error:
    cout << "Error: Negative number entered!" << endl;
    return 1; // Exit with error code
}



