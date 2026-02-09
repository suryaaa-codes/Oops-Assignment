// Program 41: Simple class and object
#include <iostream>


using namespace std;
class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person person1;
    person1.name = "Alice";
    person1.age = 25;

    Person person2;
    person2.name = "Bob";
    person2.age = 30;

    person1.introduce();
    person2.introduce();

    return 0;
}



