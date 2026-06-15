#include <iostream>
using namespace std;

// Function to find sum of two numbers
int sum(int a, int b)
{
    return a + b;   // returning addition of two numbers
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
    int result = sum(num1, num2);

    // Displaying result
    cout << "Sum = " << result;

    return 0;
}