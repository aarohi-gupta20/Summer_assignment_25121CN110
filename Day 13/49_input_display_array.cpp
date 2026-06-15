#include <iostream>
using namespace std;

int main()
{
    int arr[100];   // Declare an array
    int n;

    // Taking size of array from user
    cout << "Enter number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display array elements
    cout << "Array elements are: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}