// Program 33: Program to find second-largest element
#include <iostream>
#include <climits>

using namespace std;
int main() {
    int n;

    cout << "Enter number of elements (min 2): ";
    cin >> n;

    if (n < 2) {
        cout << "Invalid input! Need at least 2 elements." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "Second largest element: " << second << endl;
    }

    return 0;
}



