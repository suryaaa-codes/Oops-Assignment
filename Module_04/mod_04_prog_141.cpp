// Program 141: Delete record in file
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;
class Student {
public:
    int roll;
    char name[20];
};

int main() {
    ifstream inFile("student.dat", ios::binary);
    ofstream outFile("temp.dat", ios::binary);
    Student s;
    int deleteRoll;
    bool found = false;

    cout << "Enter Roll No to delete: ";
    cin >> deleteRoll;

    while (inFile.read((char*)&s, sizeof(s))) {
        if (s.roll != deleteRoll) {
            outFile.write((char*)&s, sizeof(s));
        } else {
            found = true;
        }
    }

    inFile.close();
    outFile.close();

    if (found) {
        remove("student.dat");
        rename("temp.dat", "student.dat");
        cout << "Record Deleted." << endl;
    } else {
        remove("temp.dat");
        cout << "Record not found." << endl;
    }

    return 0;
}



