// Program 5: Program using const keyword
#include <iostream>

using namespace std;
int main() {
    // Declare a constant variable
    const float PI = 3.14159;
    
    float radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Calculate area using the constant
    float area = PI * radius * radius;

    cout << "Value of PI (const): " << PI << endl;
    cout << "Area of circle: " << area << endl;

    // Uncommenting the line below will cause a compilation error
    // PI = 3.14; 

    return 0;
}



