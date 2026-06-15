#include <iostream>
using namespace std;

// Function to check perfect number
void perfectNumber(int n)
{
    int sum = 0;

    // Find sum of factors
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    // Checking perfect number
    if(sum == n)
        cout << "Perfect number";
    else
        cout << "Not a perfect number";
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    // Calling function
    perfectNumber(num);

    return 0;
}