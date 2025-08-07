#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Taking dimensions of the matrix from the user
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare 2D array (matrix)
    int matrix[100][100];  // Assuming max size is 100x100

    // Input elements
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Displaying the matrix
    cout << "\nThe entered matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0;
