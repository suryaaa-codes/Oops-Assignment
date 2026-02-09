// Program 135: String stream (stringstream)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main() {
    string str = "100 200 300";
    stringstream ss(str);
    int num;

    cout << "Extracting integers from string: \"" << str << "\"" << endl;
    while (ss >> num) {
        cout << "Number: " << num << endl;
    }

    return 0;
}



