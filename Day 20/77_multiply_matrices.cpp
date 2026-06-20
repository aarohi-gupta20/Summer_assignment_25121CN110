#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of first matrix
    cout << "Enter rows and columns of first matrix: ";
    if (!(cin >> r1 >> c1) || r1 <= 0 || c1 <= 0) {
        cout << "Invalid dimensions.\n";
        return 1;
    }

    // Input dimensions of second matrix
    cout << "Enter rows and columns of second matrix: ";
    if (!(cin >> r2 >> c2) || r2 <= 0 || c2 <= 0) {
        cout << "Invalid dimensions.\n";
        return 1;
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible. "
             << "Columns of first must equal rows of second.\n";
        return 1;
    }

    // Declare matrices using vector for dynamic size
    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));
    vector<vector<int>> result(r1, vector<int>(c2, 0)); // Initialize with 0

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
