#include <iostream>
using namespace std;

// Function to check Armstrong number
void armstrong(int n)
{
    int temp = n;
    int sum = 0;

    // Finding sum of cubes of digits
    while(n > 0)
    {
        int digit = n % 10;          // Get last digit
        sum = sum + (digit * digit * digit);
        n = n / 10;                  // Remove last digit
    }

    // Checking Armstrong condition
    if(temp == sum)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    // Calling function
    armstrong(num);

    return 0;
}