#Experiment - 8

Aim: To perform various matrix operations in C++.

Software Required: Visual Studio (or any C++ compiler like Code::Blocks, Dev C++, Turbo C++)

Theory: Matrix operations are essential in various computational tasks such as data processing, graphics, scientific simulations, and more. In C++, matrices are typically represented using 2D arrays. 

This experiment covers:

Matrix Addition:
Adds two matrices of the same order by summing corresponding elements.

Comparison of First and Second Row:
Compares each element of the first row with the corresponding element of the second row.

Diagonal Addition:
Calculates the sum of diagonal elements in a square matrix, where the row index equals the column index (i = j).

Matrix Multiplication:
Multiplies two matrices using the rule that the number of columns in the first matrix must equal the number of rows in the second matrix.

Transpose of a Matrix:
Converts rows into columns and vice versa.

Algorithms:

1. Matrix Addition
Input: Read elements of Matrix A and B.
Check: Ensure both matrices have the same dimensions.
Process: Add corresponding elements to form Matrix C.
Output: Display Matrix C.

2. Comparison of First and Second Rows
Input: Read matrix dimensions and elements.
Process: For each column, compare the element of the first row with the second row.
Output: Display comparison result (equal or not) column-wise.

3. Diagonal Addition
Input: Read the size n of the square matrix and matrix elements.
Process: Initialize sum = 0. Add all elements where row index equals column index.
Output: Display the diagonal sum.

4. Matrix Multiplication
Input: Read dimensions m x n for Matrix A and n x p for Matrix B.
Process: Initialize a result matrix C with all elements zero. Use triple nested loops to calculate each element as:
C[i][j] += A[i][k] * B[k][j]
Output: Display the product matrix C.

5. Transpose of a Matrix
Input: Read matrix dimensions and elements.
Process: Create a new matrix T and set T[i][j] = A[j][i].
Output: Display the transpose matrix T.
Implementation (Code Summary):

Each matrix operation can be implemented using nested loops:
Addition: 2 nested loops to iterate over each element.
Comparison: Simple comparison using loops over first two rows.
Diagonal Sum: Use a single loop to sum elements where i == j.
Multiplication: Triple nested loop.
Transpose: Use two nested loops to swap rows and columns.

Conclusion: In this experiment, we successfully learned how to implement basic matrix operations in C++ using 2D arrays and control structures. 
These included:
Matrix Addition
Row Comparison
Diagonal Sum Calculation
Matrix Multiplication
Matrix Transposition
This knowledge is foundational for mathematical computations and applications in graphics, engineering, and data science using C++.
