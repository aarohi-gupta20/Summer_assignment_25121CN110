#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Input string from user
    cout << "Enter a string: ";
    getline(cin, str);

    // Boolean array to mark visited characters (ASCII size = 256)
    bool visited[256] = {false};

    char firstRepeating = '\0'; // To store the first repeating character

    // Traverse the string
    for (char ch : str) {
        // If character already visited, it's the first repeating
        if (visited[(unsigned char)ch]) {
            firstRepeating = ch;
            break;
        }
        // Mark character as visited
        visited[(unsigned char)ch] = true;
    }

    // Output result
    if (firstRepeating != '\0') {
        cout << "First repeating character: '" << firstRepeating << "'" << endl;
    } else {
        cout << "No repeating characters found." << endl;
    }

    return 0;
}
