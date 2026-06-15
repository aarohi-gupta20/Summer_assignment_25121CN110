#include <iostream>
using namespace std;

// Function to find maximum of two numbers
int maximum(int a, int b)
{
    if(a > b)
        return a;   // a is greater
    else
        return b;   // b is greater
}

int main()
{
    int num1, num2;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calling function
    int max = maximum(num1, num2);

    // Printing maximum number
    cout << "Maximum number = " << max;

    return 0;
}