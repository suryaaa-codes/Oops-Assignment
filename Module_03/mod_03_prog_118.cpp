// Program 118: Aggregation of objects
#include <iostream>
#include <string>

using namespace std;
class Address {
public:
    string city, state;
    Address(string c, string s) : city(c), state(s) {}
};

class Employee {
    Address* address; // Aggregation: Employee has an Address (but Address can exist independently)
    string name;
public:
    Employee(string n, Address* addr) : name(n), address(addr) {}
    void display() {
        cout << name << " lives in " << address->city << ", " << address->state << endl;
    }
};

int main() {
    Address addr("New York", "NY");
    Employee emp("John", &addr);
    emp.display();

    return 0;
}



