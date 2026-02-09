// Program 104: Dynamic method dispatch
#include <iostream>

using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    a = &d;
    a->sound(); // Dynamic dispatch to Dog::sound

    a = &c;
    a->sound(); // Dynamic dispatch to Cat::sound

    return 0;
}



