// Program 56: Destructor demo
#include <iostream>

using namespace std;
class Test {
    static int count;
    int id;
public:
    Test() {
        count++;
        id = count;
        cout << "Object " << id << " created." << endl;
    }

    ~Test() {
        cout << "Object " << id << " destroyed." << endl;
    }
};

int Test::count = 0;

int main() {
    cout << "Main starts" << endl;
    Test t1;
    {
        cout << "Inside block" << endl;
        Test t2, t3;
        cout << "Leaving block" << endl;
    }
    cout << "Back in main" << endl;
    return 0;
}



