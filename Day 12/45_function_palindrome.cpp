#include <iostream>
using namespace std;

// Function to check whether a number is palindrome or not
bool isPalindrome(int num)
{
    int original = num;   // Store original number
    int reverse = 0;       // Variable to store reversed number

    // Reverse the number
    while(num > 0)
    {
        int digit = num % 10;        // Get last digit
        reverse = reverse * 10 + digit;
        num = num / 10;              // Remove last digit
    }

    // Check original and reverse number
    if(original == reverse)
        return true;
    else
        return false;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Calling function
    if(isPalindrome(n))
        cout << "Number is Palindrome";
    else
        cout << "Number is not Palindrome";

    return 0;
}