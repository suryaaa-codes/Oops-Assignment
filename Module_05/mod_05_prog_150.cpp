// Program 150: Throwing string exception
#include <iostream>
#include <string>

using namespace std;
int main() {
    try {
        throw string("String Exception");
    } catch (string s) {
        cout << "Caught: " << s << endl;
    }
    return 0;
}



