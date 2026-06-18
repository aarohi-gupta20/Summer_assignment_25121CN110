#include <iostream>
#include <vector>
using namespace std;

// Function to perform Selection Sort
void selectionSort(vector<int> &arr) {
    int n = arr.size();

    // Outer loop: iterate over each position in the array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current index has the smallest value

        // Inner loop: find the index of the smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;

    // Input: size of the array
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    vector<int> arr(n);

    // Input: array elements
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid input. Please enter integers only.\n";
            return 1;
        }
    }

    // Sort the array
    selectionSort(arr);

    // Output: sorted array
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
