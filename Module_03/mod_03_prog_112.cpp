// Program 112: Student result processing (OOP)
#include <iostream>

using namespace std;
class Student {
protected:
    int roll;
public:
    void getRoll(int r) { roll = r; }
    void putRoll() { cout << "Roll No: " << roll << endl; }
};

class Test : public Student {
protected:
    float sub1, sub2;
public:
    void getMarks(float x, float y) {
        sub1 = x;
        sub2 = y;
    }
    void putMarks() {
        cout << "Marks in Sub1: " << sub1 << endl;
        cout << "Marks in Sub2: " << sub2 << endl;
    }
};

class Result : public Test {
    float total;
public:
    void display() {
        total = sub1 + sub2;
        putRoll();
        putMarks();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result student1;
    student1.getRoll(101);
    student1.getMarks(75.5, 82.0);
    student1.display();

    return 0;
}



