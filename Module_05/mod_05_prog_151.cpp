// Program 151: Throwing object exception
#include <iostream>

using namespace std;
class MyException {
public:
    void show() {
        cout << "Custom Object Exception Caught!" << endl;
    }
};

int main() {
    try {
        throw MyException();
    } catch (MyException e) {
        e.show();
    }
    return 0;
}



