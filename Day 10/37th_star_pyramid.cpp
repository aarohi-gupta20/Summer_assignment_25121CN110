#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Taking number of rows from user
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for(int i = 1; i <= rows; i++)
    {
        // Printing spaces before stars
        for(int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        // Printing stars
        for(int k = 1; k <= (2*i - 1); k++)
        {
            cout << "*";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}