// Program 71: Static data member
#include <iostream>

using namespace std;
class Item {
    static int count;
    int number;
public:
    void getdata(int a) {
        number = a;
        count++;
    }
    void getcount() {
        cout << "Count: " << count << endl;
    }
};

int Item::count = 0;

int main() {
    Item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout << "After reading data" << endl;
    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}



