// Program 35: Program for matrix addition
#include <iostream>

using namespace std;
int main() {
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[r][c], b[r][c], sum[r][c];

    cout << "Enter elements of 1st matrix:" << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> a[i][j];

    cout << "Enter elements of 2nd matrix:" << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> b[i][j];

    // Adding matrices
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}



