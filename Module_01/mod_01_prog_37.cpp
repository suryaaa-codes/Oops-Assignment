// Program 37: Program for string length without using library function
#include <iostream>

using namespace std;
int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of string: " << length << endl;

    return 0;
}



