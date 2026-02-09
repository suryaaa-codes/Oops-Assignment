// Program 123: get() and put()
#include <iostream>

using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin.get(ch); // Reads a single character
    cout << "You entered: ";
    cout.put(ch); // Writes a single character
    cout << endl;
    return 0;
}



