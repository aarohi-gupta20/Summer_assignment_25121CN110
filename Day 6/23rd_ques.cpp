#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    // Input number
    cout << "Enter a number: ";
    cin >> n;

    // Loop until number becomes 0
    while (n > 0) {

        // Check last bit (if odd → bit is 1)
        if (n % 2 == 1) {
            count++;   // increase count of set bits
        }

        // Divide number by 2 (shift right in binary)
        n = n / 2;
    }

    // Output total number of 1s
    cout << "Number of set bits = " << count;

    return 0;
}