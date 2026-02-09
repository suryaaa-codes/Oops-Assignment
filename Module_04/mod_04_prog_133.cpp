// Program 133: Store student data (file handling)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    ofstream file("students.txt", ios::app);
    string name;
    int roll;

    cout << "Enter Roll No: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);

    file << roll << " " << name << "\n";
    cout << "Student data saved." << endl;
    file.close();

    return 0;
}



