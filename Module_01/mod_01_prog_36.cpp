// Program 36: Program for matrix multiplication
#include <iostream>

using namespace std;
int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }

    int a[r1][c1], b[r2][c2], mult[r1][c2];

    cout << "Enter elements of 1st matrix:" << endl;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> a[i][j];

    cout << "Enter elements of 2nd matrix:" << endl;
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> b[i][j];

    // Initializing result matrix to 0
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            mult[i][j] = 0;

    // Multiplying matrices
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                mult[i][j] += a[i][k] * b[k][j];

    cout << "Product of matrices:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j)
            cout << mult[i][j] << " ";
        cout << endl;
    }

    return 0;
}



