// Program 47: Largest of two numbers class
#include <iostream>

using namespace std;
class Largest {
private:
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void findMax() {
        if (a > b)
            cout << a << " is larger." << endl;
        else if (b > a)
            cout << b << " is larger." << endl;
        else
            cout << "Both are equal." << endl;
    }
};

int main() {
    Largest obj;
    obj.input();
    obj.findMax();

    return 0;
}



