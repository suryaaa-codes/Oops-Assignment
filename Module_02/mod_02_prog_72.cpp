// Program 72: Static member function
#include <iostream>

using namespace std;
class Test {
    int code;
    static int count;
public:
    void setcode() {
        code = ++count;
    }
    void showcode() {
        cout << "Object number: " << code << endl;
    }
    static void showcount() {
        cout << "Count: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    Test t1, t2;

    t1.setcode();
    t2.setcode();

    Test::showcount();

    Test t3;
    t3.setcode();

    Test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}



