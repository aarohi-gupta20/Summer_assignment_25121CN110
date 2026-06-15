#include <iostream>
using namespace std;

// Recursive function to find factorial
int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;   // Base condition
    }
    else
    {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    return 0;
}