#include <iostream>
using namespace std;

// Function to check prime number
void checkPrime(int n)
{
    int count = 0;

    // Check divisibility
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    // Prime numbers have only 2 factors
    if(count == 2)
        cout << "Prime number";
    else
        cout << "Not a prime number";
}

int main()
{
    int num;

    // Taking input
    cout << "Enter number: ";
    cin >> num;

    // Calling function
    checkPrime(num);

    return 0;
}