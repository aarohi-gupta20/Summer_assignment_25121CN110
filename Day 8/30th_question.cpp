#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // Loop for rows
    for(int i = 1; i <= n; i++)
    {
        // Loop for printing numbers
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}