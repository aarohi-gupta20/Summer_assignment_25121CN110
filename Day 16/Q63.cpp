#include <iostream>
#include <unordered_set>
using namespace std;

void findPairs(int arr[], int n, int target) {
    unordered_set<int> seen;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (seen.find(complement) != seen.end()) {
            cout << "Pair found: (" << arr[i] << ", " << complement << ")" << endl;
            found = true;
        }
        seen.insert(arr[i]);
    }

    if (!found) {
        cout << "No pair found with sum " << target << endl;
    }
}

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    findPairs(arr, n, target);

    return 0;
}
