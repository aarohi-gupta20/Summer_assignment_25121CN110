#include <iostream>
#include <string>   // For std::string
#include <cctype>   // For toupper()

using namespace std;

int main() {
    string input;

    // Prompt user for input
    cout << "Enter a string in lowercase: ";
    getline(cin, input); // Read entire line including spaces

    // Convert each character to uppercase
    for (size_t i = 0; i < input.length(); ++i) {
        // toupper() works only for characters; cast to unsigned char for safety
        input[i] = toupper(static_cast<unsigned char>(input[i]));
    }

    // Display the result
    cout << "Uppercase string: " << input << endl;

    return 0;
}
