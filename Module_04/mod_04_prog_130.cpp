// Program 130: Append data to file
#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream file("output.txt", ios::app); // Open in append mode
    if (file.is_open()) {
        file << "Appended line.\n";
        cout << "Data appended successfully." << endl;
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}



