#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    // Prompt user for input
    cout << "Enter a string: ";
    getline(cin, input); // Read full line including spaces

    string result = ""; // To store string without spaces

    // Loop through each character in the input string
    for (char ch : input) {
        if (ch != ' ') { // If character is not a space
            result += ch; // Append it to result
        }
    }

    // Display the result
    cout << "String without spaces: " << result << endl;

    return 0;
}
