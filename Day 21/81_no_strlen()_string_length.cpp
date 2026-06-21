
#include <iostream>
using namespace std;

int main() {
    char str[200]; // Buffer for input string
    int length = 0; // To store calculated length

    // Prompt user for input
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str)); // Reads full line including spaces

    // Pointer to traverse the string
    const char* ptr = str;

    // Move pointer until null terminator is found
    while (*ptr != '\0') {
        length++;
        ptr++; // Move to next character
    }

    // Output the result
    cout << "Length of the string is: " << length << endl;

    return 0;
}
