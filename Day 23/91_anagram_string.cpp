#include <iostream>
#include <string>
#include <algorithm> // for transform()
using namespace std;

// Function to check if two strings are anagrams
bool areAnagrams(string str1, string str2) {
    // Convert both strings to lowercase for case-insensitive comparison
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // If lengths differ, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Array to store frequency of characters (assuming ASCII)
    int freq[256] = {0};

    // Count frequency for str1 and subtract for str2
    for (size_t i = 0; i < str1.length(); i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    // If all frequencies are zero, strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    if (areAnagrams(s1, s2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}
