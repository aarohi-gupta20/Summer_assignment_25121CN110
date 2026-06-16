#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int totalSum = (n + 1) * (n + 2) / 2;  // Sum of numbers from 1 to n+1
    int arraySum = 0;

    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;  // Difference gives the missing number
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = findMissingNumber(arr, n);
    cout << "The missing number is: " << missing << endl;

    return 0;
}
