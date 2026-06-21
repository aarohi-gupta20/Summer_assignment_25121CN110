#include <iostream>
#include <string>   // For std::string
#include <algorithm> // For std::reverse

using namespace std;

int main() {
    string str;

    // Prompt user for input
    cout << "Enter a string: ";
    getline(cin, str); // Reads the entire line including spaces

    // Calculate and display the length of the string
    size_t length = str.length();
    cout << "Length of the string: " << length << endl;

    // Reverse the string using built-in function
    reverse(str.begin(), str.end());

    // Display the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
