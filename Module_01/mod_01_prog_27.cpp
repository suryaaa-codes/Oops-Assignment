// Program 27: Program using while loop to print table
#include <iostream>

using namespace std;
int main() {
    int num;
    int i = 1;

    cout << "Enter a number to print its table: ";
    cin >> num;

    cout << "Multiplication Table of " << num << ":" << endl;
    while (i <= 10) {
        cout << num << " x " << i << " = " << (num * i) << endl;
        i++;
    }

    return 0;
}



