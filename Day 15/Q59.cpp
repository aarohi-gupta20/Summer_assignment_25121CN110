#include <iostream>
using namespace std;
int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;    
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter number of positions to rotate right: ";
    cin >> k;
    k = k % n;
    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    cout << "Array after right rotation:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }    
    return 0;
}
