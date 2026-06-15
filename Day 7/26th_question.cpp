#include <iostream>
using namespace std;

// Recursive function for Fibonacci
int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;   // Base condition
    }
    else if(n == 1)
    {
        return 1;   // Base condition
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2); // Recursive call
    }
}

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for(int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
