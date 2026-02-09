// Program 40: Program using structure to store student details
#include <iostream>


using namespace std;
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    Student student1;

    cout << "Enter student name: ";
    cin.getline(student1.name, 50);
    cout << "Enter roll number: ";
    cin >> student1.rollNo;
    cout << "Enter marks: ";
    cin >> student1.marks;

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Roll No: " << student1.rollNo << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}



