#include <iostream>
using namespace std;

// Function to print Fibonacci series
void fibonacci(int n)
{
    int a = 0, b = 1, next;

    // Printing Fibonacci numbers
    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";

        next = a + b;  // Calculate next number
        a = b;
        b = next;
    }
}

int main()
{
    int num;

    cout << "Enter number of terms: ";
    cin >> num;

    // Calling function
    fibonacci(num);

    return 0;
}