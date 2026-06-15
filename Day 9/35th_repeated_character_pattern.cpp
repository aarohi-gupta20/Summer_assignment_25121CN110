#include <iostream>
using namespace std;

int main()
{
    int n;

    // Taking number of rows from user
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = 1; i <= n; i++)
    {
        // Inner loop to print repeated characters
        for(int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1) << " ";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}