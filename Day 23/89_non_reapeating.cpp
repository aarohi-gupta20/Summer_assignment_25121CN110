#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;

    // Take input from user
    cout << "Enter a string: ";
    getline(cin, str);

    // Edge case: empty string
    if (str.empty()) {
        cout << "String is empty. No characters to check.\n";
        return 0;
    }

    // Step 1: Count frequency of each character
    unordered_map<char, int> freq;
    for (char ch : str) {
        freq[ch]++; // Increment count for each character
    }

    // Step 2: Find the first character with frequency 1
    char firstNonRepeating = '\0'; // Null char to indicate not found
    for (char ch : str) {
        if (freq[ch] == 1) {
            firstNonRepeating = ch;
            break;
        }
    }

    // Step 3: Output result
    if (firstNonRepeating != '\0') {
        cout << "First non-repeating character: " << firstNonRepeating << endl;
    } else {
        cout << "No non-repeating character found.\n";
    }

    return 0;
}
