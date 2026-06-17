#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size of first array
    cout << "Enter size of first array: ";
    if (!(cin >> n1) || n1 <= 0) {
        cout << "Invalid size.\n";
        return 1;
    }

    int arr1[n1];
    cout << "Enter " << n1 << " elements for first array: ";
    for (int i = 0; i < n1; i++) {
        if (!(cin >> arr1[i])) {
            cout << "Invalid input.\n";
            return 1;
        }
    }

    // Input size of second array
    cout << "Enter size of second array: ";
    if (!(cin >> n2) || n2 <= 0) {
        cout << "Invalid size.\n";
        return 1;
    }

    int arr2[n2];
    cout << "Enter " << n2 << " elements for second array: ";
    for (int i = 0; i < n2; i++) {
        if (!(cin >> arr2[i])) {
            cout << "Invalid input.\n";
            return 1;
        }
    }

    cout << "\nCommon elements are: ";

    bool found = false; // To check if any common element exists

    // Compare each element of arr1 with arr2
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                break; // Avoid printing duplicates for same arr1[i]
            }
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
