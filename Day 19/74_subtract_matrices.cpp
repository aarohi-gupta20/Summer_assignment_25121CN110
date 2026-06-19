#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter number of rows and columns: ";
    if (!(cin >> rows >> cols) || rows <= 0 || cols <= 0) {
        cout << "Invalid input. Rows and columns must be positive integers.\n";
        return 1;
    }

    // Create 2D vectors (dynamic arrays) for matrices
    vector<vector<int>> mat1(rows, vector<int>(cols));
    vector<vector<int>> mat2(rows, vector<int>(cols));
    vector<vector<int>> result(rows, vector<int>(cols));

    // Input first matrix
    cout << "Enter elements of first matrix (" << rows * cols << " integers):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!(cin >> mat1[i][j])) {
                cout << "Invalid input. Please enter integers only.\n";
                return 1;
            }
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix (" << rows * cols << " integers):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!(cin >> mat2[i][j])) {
                cout << "Invalid input. Please enter integers only.\n";
                return 1;
            }
        }
    }

    // Subtract matrices: result = mat1 - mat2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    // Display result matrix
    cout << "\nResultant Matrix after subtraction:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
