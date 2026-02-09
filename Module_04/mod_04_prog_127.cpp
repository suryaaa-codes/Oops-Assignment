// Program 127: Reading from a file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    ifstream file("output.txt"); // Ensure this file exists (created in prev program)
    string line;
    if (file.is_open()) {
        cout << "File Content:" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}



