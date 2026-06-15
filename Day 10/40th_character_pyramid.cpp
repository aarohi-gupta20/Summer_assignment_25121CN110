#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Taking number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for(int i = 1; i <= rows; i++)
    {
        // Printing spaces
        for(int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        // Printing characters
        char ch = 'A';

        for(int k = 1; k <= i; k++)
        {
            cout << ch << " ";
            ch++;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}