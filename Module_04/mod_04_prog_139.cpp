// Program 139: Search record in file
#include <iostream>
#include <fstream>

using namespace std;
class Student {
public:
    int roll;
    char name[20];
};

int main() {
    // Assuming student.dat exists from Program 132
    ifstream file("student.dat", ios::binary);
    Student s;
    int searchRoll;
    bool found = false;

    cout << "Enter Roll No to search: ";
    cin >> searchRoll;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == searchRoll) {
            cout << "Record Found! Name: " << s.name << endl;
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



