// Program 9: Compute area of circle, triangle, rectangle
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int choice;
    float area;

    cout << "Choose shape to calculate area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of Circle: " << area << endl;
            break;
        }
        case 2: {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
            break;
        }
        case 3: {
            float length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}



