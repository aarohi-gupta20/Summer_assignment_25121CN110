#include <iostream>
#include <algorithm> // For sort()
using namespace std;

int main() {
    int n;

    // Ask user for array size
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) { // Input validation
        cout << "Invalid size. Please enter a positive integer.\n";
        return 1;
    }

    int arr[n]; // Create array of size n

    // Input array elements
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) { // Validate integer input
            cout << "Invalid input. Please enter integers only.\n";
            return 1;
        }
    }

    // Sort array in descending order using STL sort with greater<int>()
    sort(arr, arr + n, greater<int>());

    // Display sorted array
    cout << "Array in descending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
