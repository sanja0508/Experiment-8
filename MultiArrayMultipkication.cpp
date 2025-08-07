#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Matrix multiplication condition
    if (c1 != r2) {
        cout << "Matrix multiplication not possible! (columns of first != rows of second)" << endl;
        return 0;
    }

    // Declare matrices
    int A[100][100], B[100][100], product[100][100];

    // Input for first matrix
    cout << "\nEnter elements of first matrix (A):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Input for second matrix
    cout << "\nEnter elements of second matrix (B):\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Initialize product matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    cout << "\nProduct of the two matrices:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
