#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n1, n2;

    // Input size of first array
    cout << "Enter size of first array: ";
    if (!(cin >> n1) || n1 <= 0) {
        cout << "Invalid size.\n";
        return 1;
    }

    vector<int> arr1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size of second array
    cout << "Enter size of second array: ";
    if (!(cin >> n2) || n2 <= 0) {
        cout << "Invalid size.\n";
        return 1;
    }

    vector<int> arr2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Store elements of first array in a set
    set<int> set1(arr1.begin(), arr1.end());

    // Store intersection results in another set to avoid duplicates
    set<int> intersection;

    // Check each element of second array
    for (int num : arr2) {
        if (set1.find(num) != set1.end()) { // Found in first array
            intersection.insert(num);
        }
    }

    // Display intersection
    cout << "Intersection of arrays: ";
    if (intersection.empty()) {
        cout << "No common elements.";
    } else {
        for (int num : intersection) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}
