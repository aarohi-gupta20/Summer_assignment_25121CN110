#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Input matrix size
    cout << "Enter size of square matrix (n): ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid size. Please enter a positive integer.\n";
        return 1;
    }

    // Create a 2D vector (matrix) of size n x n
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix elements
    cout << "Enter " << n * n << " elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!(cin >> matrix[i][j])) {
                cout << "Invalid input. Please enter integers only.\n";
                return 1;
            }
        }
    }

    int primarySum = 0;   // Sum of primary diagonal (row == col)
    int secondarySum = 0; // Sum of secondary diagonal (row + col == n - 1)

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];           // Primary diagonal element
        secondarySum += matrix[i][n - 1 - i]; // Secondary diagonal element
    }

    // If n is odd, the center element is counted twice — remove one occurrence
    if (n % 2 == 1) {
        secondarySum -= matrix[n / 2][n / 2];
    }

    cout << "Sum of primary diagonal: " << primarySum << "\n";
    cout << "Sum of secondary diagonal: " << secondarySum << "\n";
    cout << "Total sum of both diagonals (without double-counting center): "
         << primarySum + secondarySum << "\n";

    return 0;
}
