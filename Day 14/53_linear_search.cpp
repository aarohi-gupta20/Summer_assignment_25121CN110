#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, key;
    int found = -1;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array input
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Element to search
    cout << "Enter element to search: ";
    cin >> key;

    // Linear search
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = i;
            break;
        }
    }

    // Display result
    if(found != -1)
    {
        cout << "Element found at position " << found + 1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}