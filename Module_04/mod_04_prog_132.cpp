// Program 132: Read/write objects to file
#include <iostream>
#include <fstream>

using namespace std;
class Student {
public:
    int roll;
    char name[20];

    void getData() {
        cout << "Enter Roll: "; cin >> roll;
        cout << "Enter Name: "; cin >> name;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s;
    ofstream file("student.dat", ios::binary);
    s.getData();
    file.write((char*)&s, sizeof(s));
    file.close();

    Student s2;
    ifstream file2("student.dat", ios::binary);
    file2.read((char*)&s2, sizeof(s2));
    cout << "\nData read from file:" << endl;
    s2.display();
    file2.close();

    return 0;
}



