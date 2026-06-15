#include <iostream>
using namespace std;

int main()
{
    int n;

    // Taking size of square from user
    cout << "Enter size of square: ";
    cin >> n;

    // Outer loop for rows
    for(int i = 1; i <= n; i++)
    {
        // Inner loop for columns
        for(int j = 1; j <= n; j++)
        {
            // Print star on boundary only
            if(i == 1 || i == n || j == 1 || j == n)
            {
                cout << "* ";
            }
            else
            {
                // Print space inside the square
                cout << "  ";
            }
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}