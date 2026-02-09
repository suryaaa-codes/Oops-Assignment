// Program 122: getline usage
#include <iostream>
#include <string>

using namespace std;
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence); // Reads full line including spaces
    cout << "You entered: " << sentence << endl;
    return 0;
}



