#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    int sum = 0;
    float average;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Finding sum of array elements
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Calculating average
    average = (float)sum / n;

    // Display result
    cout << "Sum of array = " << sum << endl;
    cout << "Average of array = " << average;

    return 0;
}