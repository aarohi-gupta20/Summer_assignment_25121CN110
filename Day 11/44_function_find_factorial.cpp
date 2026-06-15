#include <iostream>
using namespace std;

// Function to find factorial of a number
int factorial(int n)
{
    int fact = 1;

    // Calculating factorial
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;   // Returning result
}

int main()
{
    int num;

    // Taking input from user
    cout << "Enter number: ";
    cin >> num;

    // Calling function
    cout << "Factorial = " << factorial(num);

    return 0;
}