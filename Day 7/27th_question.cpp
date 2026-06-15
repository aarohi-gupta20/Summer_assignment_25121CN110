#include <iostream>
using namespace std;

// Recursive function to find sum of digits
int sumDigit(int n)
{
    if(n == 0)
    {
        return 0;   // Base condition
    }
    else
    {
        return (n % 10) + sumDigit(n / 10);  // Recursive call
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits = " << sumDigit(n);

    return 0;
}