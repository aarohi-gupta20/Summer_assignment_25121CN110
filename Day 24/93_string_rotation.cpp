#include <iostream>
#include <string>   // For std::string and find()

using namespace std;

// Function to check if str2 is a rotation of str1
bool isRotation(const string &str1, const string &str2) {
    // If lengths are different, they can't be rotations
    if (str1.length() != str2.length()) {
        return false;
    }

    // Concatenate str1 with itself
    string temp = str1 + str1;

    // Check if str2 is a substring of temp
    return (temp.find(str2) != string::npos);
}

int main() {
    string str1, str2;

    // Input two strings
    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    // Check and display result
    if (isRotation(str1, str2)) {
        cout << "Yes, \"" << str2 << "\" is a rotation of \"" << str1 << "\".\n";
    } else {
        cout << "No, \"" << str2 << "\" is NOT a rotation of \"" << str1 << "\".\n";
    }

    return 0;
}
