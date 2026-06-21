#include <iostream>
#include <string>
#include <cctype> // for tolower() and isalpha()

using namespace std;

int main() {
    string text;
    int vowelCount = 0, consonantCount = 0;

    // Input a line of text from the user
    cout << "Enter a string: ";
    getline(cin, text);

    // Loop through each character in the string
    for (char ch : text) {
        // Convert character to lowercase for easy comparison
        char lowerCh = tolower(ch);

        // Check if the character is an alphabet
        if (isalpha(lowerCh)) {
            // Check if it's a vowel
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' ||
                lowerCh == 'o' || lowerCh == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
        // Non-alphabetic characters are ignored
    }

    // Display the results
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
