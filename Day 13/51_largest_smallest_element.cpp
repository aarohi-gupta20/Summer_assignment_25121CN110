#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array elements
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Assume first element is largest and smallest
    int largest = arr[0];
    int smallest = arr[0];

    // Finding largest and smallest element
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Display result
    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest;

    return 0;
}