#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, key;
    int count = 0;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array input
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Element to find frequency
    cout << "Enter element to search: ";
    cin >> key;

    // Counting frequency
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    // Display result
    cout << "Frequency of " << key << " is: " << count;

    return 0;
}