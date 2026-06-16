#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> seen;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            result.push_back(arr[i]);
        }
    }

    cout << "Array after removing duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
