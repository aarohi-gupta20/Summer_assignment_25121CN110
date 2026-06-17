#include <iostream>
#include <set>   // For storing unique elements
using namespace std;

int main() {
    int n1, n2;

    // Input size of first array
    cout << "Enter size of first array: ";
    if (!(cin >> n1) || n1 < 0) {
        cout << "Invalid size.\n";
        return 1;
    }

    int arr1[n1];
    cout << "Enter " << n1 << " elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size of second array
    cout << "Enter size of second array: ";
    if (!(cin >> n2) || n2 < 0) {
        cout << "Invalid size.\n";
        return 1;
    }

    int arr2[n2];
    cout << "Enter " << n2 << " elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Use set to store unique elements from both arrays
    set<int> unionSet;

    // Insert elements of first array
    for (int i = 0; i < n1; i++) {
        unionSet.insert(arr1[i]);
    }

    // Insert elements of second array
    for (int i = 0; i < n2; i++) {
        unionSet.insert(arr2[i]);
    }

    // Display the union
    cout << "Union of the two arrays: ";
    for (int element : unionSet) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
