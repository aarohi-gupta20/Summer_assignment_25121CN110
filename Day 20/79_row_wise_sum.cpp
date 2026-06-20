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

    // Create a 2D vector to store the matrix
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

    // Calculate and print row-wise sum
    cout << "\nRow-wise sums:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0; // Reset sum for each row
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << "\n";
    }

    return 0;
}
