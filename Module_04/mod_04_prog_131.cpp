// Program 131: File opening modes
#include <iostream>
#include <fstream>

using namespace std;
int main() {
    // Open for writing (truncates existing content)
    ofstream file1("mode_test.txt", ios::out);
    file1 << "Line 1\n";
    file1.close();

    // Open for appending
    ofstream file2("mode_test.txt", ios::app);
    file2 << "Line 2 (Appended)\n";
    file2.close();

    // Open for reading
    ifstream file3("mode_test.txt", ios::in);
    string line;
    cout << "File Content:" << endl;
    while (getline(file3, line)) {
        cout << line << endl;
    }
    file3.close();

    return 0;
}



