#include <iostream>
#include <vector>
#include <limits> // For numeric_limits

using namespace std;

// Function to perform Bubble Sort
void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    bool swapped;

    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swaps happened, array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    vector<int> arr(n);

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i])) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // Sort the array
    bubbleSort(arr);

    // Display sorted array
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
