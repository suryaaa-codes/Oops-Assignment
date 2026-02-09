// Program 49: Nested classes
#include <iostream>

using namespace std;
class Outer {
public:
    class Inner {
    public:
        void display() {
            cout << "This is the Inner class." << endl;
        }
    };

    void show() {
        cout << "This is the Outer class." << endl;
    }
};

int main() {
    Outer out;
    out.show();

    Outer::Inner in;
    in.display();

    return 0;
}



