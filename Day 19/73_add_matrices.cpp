#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Step 1: Take matrix dimensions from the user
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Validate dimensions
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid matrix size. Rows and columns must be positive.\n";
        return 1;
    }

    // Step 2: Declare matrices
    int matrix1[50][50], matrix2[50][50], sum[50][50];

    // Step 3: Input elements for first matrix
    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Step 4: Input elements for second matrix
    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Step 5: Add the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Step 6: Display the result
    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
