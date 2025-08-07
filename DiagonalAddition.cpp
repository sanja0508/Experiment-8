#include <iostream>
using namespace std;

int main() {
    int n;

    // Input: size of the square matrix
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    // Input: elements of the matrix
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate diagonal sums
    for (int i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];              // main diagonal
        secondaryDiagonalSum += matrix[i][n - 1 - i]; // secondary diagonal
    }

    // If n is odd, subtract the middle element once (it gets added twice)
    int totalSum = mainDiagonalSum + secondaryDiagonalSum;
    if (n % 2 == 1) {
        totalSum -= matrix[n / 2][n / 2];
    }

    // Output
    cout << "\nSum of main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;
    cout << "Total diagonal sum: " << totalSum << endl;

    return 0;
}
