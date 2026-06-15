#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    int even = 0, odd = 0;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array elements
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Counting even and odd elements
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    // Display result
    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd;

    return 0;
}