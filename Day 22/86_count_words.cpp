#include <iostream>
#include <string>
#include <sstream> // For stringstream to split words easily

using namespace std;

int main() {
    string input;
    
    cout << "Enter a string: ";
    // Use getline to read the entire line including spaces
    getline(cin, input);

    // String stream to break the string into words
    stringstream ss(input);
    string word;
    int wordCount = 0;

    // Extract words one by one from the stream
    while (ss >> word) {
        wordCount++;
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
