#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int largest, second;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array input
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize largest and second largest
    largest = second = -1;

    // Finding second largest
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    cout << "Second largest element is: " << second;

    return 0;
}