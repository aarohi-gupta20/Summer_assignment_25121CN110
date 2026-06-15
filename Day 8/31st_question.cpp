#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = 1; i <= n; i++)
    {
        // Inner loop for characters
        for(char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}