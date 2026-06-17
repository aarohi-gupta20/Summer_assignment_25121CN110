#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size of first array
    cout << "Enter size of first array: ";
    cin >> n1;
    if (n1 <= 0) {
        cout << "Size must be positive.\n";
        return 1;
    }

    // Input size of second array
    cout << "Enter size of second array: ";
    cin >> n2;
    if (n2 <= 0) {
        cout << "Size must be positive.\n";
        return 1;
    }

    int arr1[n1], arr2[n2], merged[n1 + n2];

    // Input elements of first array
    cout << "Enter " << n1 << " elements for first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input elements of second array
    cout << "Enter " << n2 << " elements for second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Copy elements of first array into merged array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of second array into merged array after first array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Display merged array
    cout << "Merged array:\n";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
