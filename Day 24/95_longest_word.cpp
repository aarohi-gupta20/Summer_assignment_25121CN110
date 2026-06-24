#include <iostream>
#include <sstream>  // For stringstream to split words
#include <string>
#include <cctype>   // For ispunct()

using namespace std;

// Function to rotate a string left by 'd' positions
string rotateLeft(const string &str, int d) {
    if (str.empty()) return "";
    d = d % str.size(); // Handle rotations greater than length
    return str.substr(d) + str.substr(0, d);
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence); // Read full line including spaces

    stringstream ss(sentence);
    string word, longestWord;

    // Find the longest word (ignoring punctuation)
    while (ss >> word) {
        // Remove punctuation from start and end
        while (!word.empty() && ispunct(word.front())) word.erase(word.begin());
        while (!word.empty() && ispunct(word.back())) word.pop_back();

        if (word.size() > longestWord.size()) {
            longestWord = word;
        }
    }

    if (longestWord.empty()) {
        cout << "No valid word found in the sentence.\n";
        return 0;
    }

    cout << "Longest word: " << longestWord << endl;

    // Rotate the longest word by 2 positions (example)
    int rotateBy = 2;
    string rotated = rotateLeft(longestWord, rotateBy);

    cout << "Rotated longest word (by " << rotateBy << " positions): " << rotated << endl;

    return 0;
}
