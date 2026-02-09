// Program 142: Merge two files
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    // Create two files for demonstration
    ofstream f1("file1.txt"); f1 << "Content of File 1\n"; f1.close();
    ofstream f2("file2.txt"); f2 << "Content of File 2\n"; f2.close();

    ifstream file1("file1.txt");
    ifstream file2("file2.txt");
    ofstream mergedFile("merged.txt");
    string line;

    if (file1.is_open() && file2.is_open() && mergedFile.is_open()) {
        while (getline(file1, line)) {
            mergedFile << line << "\n";
        }
        while (getline(file2, line)) {
            mergedFile << line << "\n";
        }
        cout << "Files merged successfully." << endl;
    } else {
        cout << "Error opening files." << endl;
    }

    file1.close();
    file2.close();
    mergedFile.close();

    return 0;
}



