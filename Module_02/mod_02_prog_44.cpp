// Program 44: Employee details class
#include <iostream>
#include <string>

using namespace std;
class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); // Clear buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\nEmployee Details:" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.getDetails();
    emp.displayDetails();

    return 0;
}



