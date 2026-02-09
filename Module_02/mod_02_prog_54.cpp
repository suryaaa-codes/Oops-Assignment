// Program 54: Copy constructor
#include <iostream>

using namespace std;
class Sample {
    int id;
public:
    Sample(int x) {
        id = x;
    }

    // Copy Constructor
    Sample(const Sample &obj) {
        id = obj.id;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "ID: " << id << endl;
    }
};

int main() {
    Sample s1(100);
    s1.display();

    Sample s2 = s1; // Copy constructor called
    s2.display();

    Sample s3(s1); // Copy constructor called
    s3.display();

    return 0;
}



