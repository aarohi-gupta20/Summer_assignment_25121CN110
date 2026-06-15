#include <iostream>
using namespace std;

int main()
{
    int n;

    // Take input from user
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop
    for(int i = n; i >= 1; i--)
    {
        // Print stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // New line
        cout << endl;
    }

    return 0;
}