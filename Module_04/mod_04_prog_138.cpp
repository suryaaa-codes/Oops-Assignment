// Program 138: Store/retrieve structures (binary)
#include <iostream>
#include <fstream>

using namespace std;
struct Employee {
    int id;
    char name[50];
    double salary;
};

int main() {
    Employee e1 = {101, "John Doe", 50000.0};

    // Write structure
    ofstream outfile("employee.bin", ios::binary);
    outfile.write((char*)&e1, sizeof(e1));
    outfile.close();

    // Read structure
    Employee e2;
    ifstream infile("employee.bin", ios::binary);
    infile.read((char*)&e2, sizeof(e2));
    infile.close();

    cout << "Employee Details:" << endl;
    cout << "ID: " << e2.id << endl;
    cout << "Name: " << e2.name << endl;
    cout << "Salary: " << e2.salary << endl;

    return 0;
}



