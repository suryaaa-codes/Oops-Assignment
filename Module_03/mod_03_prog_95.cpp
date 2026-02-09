// Program 95: Employee payroll (inheritance)
#include <iostream>
#include <string>

using namespace std;
class Employee {
protected:
    int empId;
    string empName;
public:
    void getEmpDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
    }
};

class Salary : public Employee {
    float basic, hra, da, grossSalary;
public:
    void getSalaryDetails() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
        hra = 0.2 * basic;
        da = 0.5 * basic;
    }

    void calculateSalary() {
        grossSalary = basic + hra + da;
    }

    void displaySlip() {
        cout << "\n--- Pay Slip ---" << endl;
        cout << "ID: " << empId << endl;
        cout << "Name: " << empName << endl;
        cout << "Basic: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Salary s;
    s.getEmpDetails();
    s.getSalaryDetails();
    s.calculateSalary();
    s.displaySlip();

    return 0;
}



