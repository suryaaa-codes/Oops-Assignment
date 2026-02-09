// Program 134: Read until EOF
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    ifstream file("students.txt");
    string line;

    if (file.is_open()) {
        cout << "Reading file until EOF:" << endl;
        while (!file.eof()) {
            getline(file, line);
            if (file.eof()) break; // Avoid printing empty line at end
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "File not found." << endl;
    }
    return 0;
}



