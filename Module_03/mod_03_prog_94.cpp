// Program 94: Student mark processing (inheritance)
#include <iostream>
#include <string>

using namespace std;
class Student {
protected:
    int rollNo;
    string name;
public:
    void getDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
};

class Marks : public Student {
protected:
    int m1, m2, m3;
public:
    void getMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks {
    int total;
    float avg;
public:
    void display() {
        total = m1 + m2 + m3;
        avg = total / 3.0;
        cout << "\n--- Student Result ---" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Result r;
    r.getDetails();
    r.getMarks();
    r.display();

    return 0;
}



