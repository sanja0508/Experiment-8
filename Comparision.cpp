#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter number of rows (minimum 2): ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Ensure we have at least two rows to compare
    if (rows < 2) {
        cout << "Matrix must have at least 2 rows to compare.\n";
        return 1;
    }

    int matrix[100][100];

    // Input matrix elements
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Compare elements of first and second rows
    cout << "\nComparison of first row and second row:\n";
    for (int j = 0; j < cols; j++) {
        cout << "Column " << j << ": ";
        if (matrix[0][j] == matrix[1][j]) {
            cout << "Equal (" << matrix[0][j] << " == " << matrix[1][j] << ")\n";
        } else {
            cout << "Different (" << matrix[0][j] << " != " << matrix[1][j] << ")\n";
        }
    }

    return 0;
}
