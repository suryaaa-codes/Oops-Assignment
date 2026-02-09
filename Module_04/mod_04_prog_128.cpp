// Program 128: Copy file content
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    ifstream source("output.txt");
    ofstream dest("copy.txt");
    string line;

    if (source.is_open() && dest.is_open()) {
        while (getline(source, line)) {
            dest << line << "\n";
        }
        cout << "File copied successfully." << endl;
        source.close();
        dest.close();
    } else {
        cout << "Error opening files." << endl;
    }
    return 0;
}



