#include <iostream>
using namespace std;

int main()
{
    int n;

    // Taking number of rows from user
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = n; i >= 1; i--)
    {
        // Inner loop to print numbers
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}