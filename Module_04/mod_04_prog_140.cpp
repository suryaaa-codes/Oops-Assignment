// Program 140: Update record in file
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
class Student {
public:
    int roll;
    char name[20];
};

int main() {
    fstream file("student.dat", ios::binary | ios::in | ios::out);
    Student s;
    int updateRoll;
    bool found = false;

    cout << "Enter Roll No to update: ";
    cin >> updateRoll;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == updateRoll) {
            cout << "Enter new Name: ";
            cin >> s.name;
            
            // Move pointer back to start of this record
            int pos = -1 * static_cast<int>(sizeof(s));
            file.seekp(pos, ios::cur);
            
            file.write((char*)&s, sizeof(s));
            cout << "Record Updated." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Record not found." << endl;
    }
    file.close();

    return 0;
}



