#include <iostream>
#include <string>
#include <cctype> // for isalpha

using namespace std;

// Function to perform left rotation of a string by 'd' positions
string leftRotate(const string &str, int d) {
    int n = str.length();
    if (n == 0) return str; // Edge case: empty string
    d = d % n; // Handle rotations greater than length
    return str.substr(d) + str.substr(0, d);
}

// Function to perform right rotation of a string by 'd' positions
string rightRotate(const string &str, int d) {
    int n = str.length();
    if (n == 0) return str;
    d = d % n;
    return str.substr(n - d) + str.substr(0, n - d);
}

// Function to compress a string using Run-Length Encoding (RLE)
string compressString(const string &str) {
    if (str.empty()) return "";

    string compressed = "";
    int count = 1;

    for (size_t i = 1; i <= str.length(); i++) {
        if (i < str.length() && str[i] == str[i - 1]) {
            count++;
        } else {
            compressed += str[i - 1];
            if (count > 1) compressed += to_string(count);
            count = 1;
        }
    }
    return compressed;
}

int main() {
    string input;
    int shift;
    char direction;

    // Take input string
    cout << "Enter a string: ";
    getline(cin, input);

    // Take rotation details
    cout << "Enter rotation amount: ";
    if (!(cin >> shift) || shift < 0) {
        cout << "Invalid rotation amount.\n";
        return 1;
    }

    cout << "Enter rotation direction (L for left, R for right): ";
    cin >> direction;

    // Perform rotation
    string rotated;
    if (direction == 'L' || direction == 'l') {
        rotated = leftRotate(input, shift);
    } else if (direction == 'R' || direction == 'r') {
        rotated = rightRotate(input, shift);
    } else {
        cout << "Invalid direction.\n";
        return 1;
    }

    // Compress rotated string
    string compressed = compressString(rotated);

    // Output results
    cout << "\nRotated String: " << rotated << endl;
    cout << "Compressed String: " << compressed << endl;

    return 0;
}
