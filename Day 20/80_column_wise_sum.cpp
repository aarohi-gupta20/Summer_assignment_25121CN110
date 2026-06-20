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
    cout << "Enter matrix elements (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!(cin >> matrix[i][j])) {
                cout << "Invalid input. Please enter integers only.\n";
                return 1;
            }
        }
    }

    // Calculate column-wise sum
    cout << "\nColumn-wise sums:\n";
    for (int col = 0; col < cols; col++) {
        int sum = 0;
        for (int row = 0; row < rows; row++) {
            sum += matrix[row][col]; // Add element from each row in this column
        }
        cout << "Sum of column " << col + 1 << " = " << sum << "\n";
    }

    return 0;
}
