// Program 38: Program to copy string manually
#include <iostream>

using namespace std;
int main() {
    char source[100], destination[100];
    int i = 0;

    cout << "Enter source string: ";
    cin.getline(source, 100);

    // Copy string manually
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null terminate destination string

    cout << "Copied string: " << destination << endl;

    return 0;
}



