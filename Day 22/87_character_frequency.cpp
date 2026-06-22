#include <iostream>
#include <map>
#include <string>
#include <cctype> // for tolower()

using namespace std;

int main() {
    string text;

    // Prompt user for input
    cout << "Enter a string: ";
    getline(cin, text); // Read entire line including spaces

    // Map to store character frequencies
    map<char, int> frequency;

    // Loop through each character in the string
    for (char ch : text) {
        // Convert to lowercase for case-insensitive counting
        char lowerChar = tolower(static_cast<unsigned char>(ch));

        // Only count printable characters (excluding spaces if desired)
        if (isprint(lowerChar) && lowerChar != ' ') {
            frequency[lowerChar]++; // Increment count
        }
    }

    // Display the frequency of each character
    cout << "\nCharacter frequencies:\n";
    for (auto &pair : frequency) {
        cout << "'" << pair.first << "' : " << pair.second << "\n";
    }

    return 0;
}
