#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare matrices
    int matrix1[100][100], matrix2[100][100], sum[100][100];

    // Input for first matrix
    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input for second matrix
    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Add the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display result
    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
