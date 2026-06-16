#include <iostream>
#include <vector>
#include <unordered_map>

// Function to find the maximum frequency element
// Returns the element, and updates 'maxFreq' with its count
int findMaxFrequencyElement(const std::vector<int>& arr, int& maxFreq) {
    if (arr.empty()) {
        maxFreq = 0;
        return -1; // Return a default value or handle as needed
    }

    std::unordered_map<int, int> frequencyMap;
    
    // Count frequencies of each element
    for (int num : arr) {
        frequencyMap[num]++;
    }
    
    int maxElement = arr[0];
    maxFreq = 0;
    
    // Find the element with the highest frequency
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxElement = pair.first;
        }
    }
    
    return maxElement;
}