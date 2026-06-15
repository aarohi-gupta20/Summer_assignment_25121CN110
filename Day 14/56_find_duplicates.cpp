#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array input
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    // Finding duplicates
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}