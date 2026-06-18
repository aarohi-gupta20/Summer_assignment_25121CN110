#include <iostream>
#include <vector>
#include <limits> // For numeric_limits

using namespace std;

// Function to perform binary search
// Returns index if found, otherwise -1
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents overflow

        if (arr[mid] == target) {
            return mid; // Element found
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search in right half
        }
        else {
            right = mid - 1; // Search in left half
        }
    }
    return -1; // Element not found
}

int main() {
    int n;

    // Input array size with validation
    cout << "Enter number of elements: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> arr(n);

    // Input sorted array
    cout << "Enter " << n << " sorted integers (ascending order):\n";
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i])) {
            cout << "Invalid input. Enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    int target;
    cout << "Enter element to search: ";
    while (!(cin >> target)) {
        cout << "Invalid input. Enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Perform binary search
    int result = binarySearch(arr, target);

    // Output result
    if (result != -1) {
        cout << "Element found at index " << result << " (0-based indexing)\n";
    } else {
        cout << "Element not found in the array.\n";
    }

    return 0;
}
