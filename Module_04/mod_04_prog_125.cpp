// Program 125: File creation
#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream file("example.txt"); // Creates file
    if (file.is_open()) {
        cout << "File created successfully." << endl;
        file.close();
    } else {
        cout << "Error creating file." << endl;
    }
    return 0;
}



