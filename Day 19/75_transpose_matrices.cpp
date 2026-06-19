#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter number of rows: ";
    if (!(cin >> rows) || rows <= 0) {
        cout << "Invalid number of rows.\n";
        return 1;
    }

    cout << "Enter number of columns: ";
    if (!(cin >> cols) || cols <= 0) {
        cout << "Invalid number of columns.\n";
        return 1;
    }

    // Create a 2D vector (matrix) of given size
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input matrix elements
    cout << "Enter matrix elements (" << rows * cols << " integers):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!(cin >> matrix[i][j])) {
                cout << "Invalid input. Please enter integers only.\n";
                return 1;
            }
        }
    }

    // Create a matrix to store the transpose
    vector<vector<int>> transpose(cols, vector<int>(rows));

    // Compute transpose: swap rows with columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transpose
    cout << "\nTranspose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
