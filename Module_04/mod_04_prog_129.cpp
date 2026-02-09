// Program 129: Count words in file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    ifstream file("output.txt");
    string word;
    int count = 0;

    if (file.is_open()) {
        while (file >> word) {
            count++;
        }
        cout << "Total words in file: " << count << endl;
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}



