// Program 114: Employee payroll system
#include <iostream>

using namespace std;
class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    virtual void calculateSalary() = 0;
    virtual void display() = 0;
};

class FullTimeEmployee : public Employee {
    double bonus;
public:
    FullTimeEmployee(string n, int i, double s, double b) {
        name = n; id = i; salary = s; bonus = b;
    }
    void calculateSalary() {
        salary += bonus;
    }
    void display() {
        cout << "Full Time Emp: " << name << ", ID: " << id << ", Total Salary: " << salary << endl;
    }
};

class PartTimeEmployee : public Employee {
    int hours;
    double hourlyRate;
public:
    PartTimeEmployee(string n, int i, int h, double r) {
        name = n; id = i; hours = h; hourlyRate = r;
    }
    void calculateSalary() {
        salary = hours * hourlyRate;
    }
    void display() {
        cout << "Part Time Emp: " << name << ", ID: " << id << ", Total Salary: " << salary << endl;
    }
};

int main() {
    FullTimeEmployee ft("Alice", 101, 50000, 5000);
    PartTimeEmployee pt("Bob", 102, 40, 500);

    ft.calculateSalary();
    ft.display();

    pt.calculateSalary();
    pt.display();

    return 0;
}



