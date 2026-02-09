// Program 126: Writing to a file
#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream file("output.txt");
    if (file.is_open()) {
        file << "Hello, this is a test file.\n";
        file << "Writing to file in C++.\n";
        file.close();
        cout << "Data written to file." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}



