// Program 136: Check if file exists
#include <iostream>
#include <fstream>

using namespace std;
bool fileExists(const string& filename) {
    ifstream file(filename);
    return file.good();
}

int main() {
    string filename = "students.txt";
    if (fileExists(filename)) {
        cout << filename << " exists." << endl;
    } else {
        cout << filename << " does not exist." << endl;
    }
    return 0;
}



