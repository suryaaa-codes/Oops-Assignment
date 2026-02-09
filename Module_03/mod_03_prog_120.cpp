// Program 120: Object life cycle
#include <iostream>

using namespace std;
class LifeCycle {
public:
    LifeCycle() {
        cout << "Constructor: Object Created" << endl;
    }
    
    void work() {
        cout << "Method: Object Working" << endl;
    }

    ~LifeCycle() {
        cout << "Destructor: Object Destroyed" << endl;
    }
};

int main() {
    cout << "Main Start" << endl;
    {
        LifeCycle obj;
        obj.work();
    } // Object destroyed here
    cout << "Main End" << endl;

    return 0;
}



