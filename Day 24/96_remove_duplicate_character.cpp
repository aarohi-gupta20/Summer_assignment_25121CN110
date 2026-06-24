#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read full line including spaces

    unordered_set<char> seen; // To track characters already added
    string result = "";

    // Loop through each character in the input string
    for (char ch : input) {
        // If character is not seen before, add to result
        if (seen.find(ch) == seen.end()) {
            result += ch;       // Append to result string
            seen.insert(ch);    // Mark as seen
        }
    }

    cout << "String after removing duplicates: " << result << endl;
    return 0;
}
