#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Function to find the maximum occurring character in a string
char getMaxOccurringChar(const string &str) {
    // Array to store frequency of each ASCII character
    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : str) {
        freq[(unsigned char)ch]++; // cast to unsigned char to avoid negative index
    }

    // Find the character with the maximum frequency
    int maxCount = -1;
    char maxChar = '\0';
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); // Read full line including spaces

    // Handle empty string case
    if (input.empty()) {
        cout << "String is empty. No characters to evaluate.\n";
        return 0;
    }

    char result = getMaxOccurringChar(input);
    cout << "Maximum occurring character: '" << result << "'\n";

    return 0;
}
