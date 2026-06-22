#include <iostream>
#include <string>
#include <cctype>
 // for tolower() and isalnum()

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        // Compare characters in lowercase
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
             // Mismatch found
        }

        left++;
        right--;
    }
    return true;
     // All characters matched
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); // Read full line including spaces

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}
