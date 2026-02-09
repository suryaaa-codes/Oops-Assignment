// Program 58: Dynamic memory in constructor
#include <iostream>
#include <cstring>

using namespace std;
class String {
    char *name;
public:
    String(const char *s) {
        int length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    ~String() {
        delete[] name;
        cout << "Memory released." << endl;
    }
};

int main() {
    String s1("Hello");
    s1.display();
    
    String s2("World");
    s2.display();

    return 0;
}



