#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, rem;

    // Taking binary number as input
    cout << "Enter a binary number: ";
    cin >> binary;

    // Loop runs until all digits are processed
    while (binary > 0) {

        // Extract last digit (0 or 1)
        rem = binary % 10;

        // Add value to decimal using base (1, 2, 4, 8...)
        decimal = decimal + rem * base;

        // Update base (next power of 2)
        base = base * 2;

        // Remove last digit from binary number
        binary = binary / 10;
    }

    // Print final decimal result
    cout << "Decimal = " << decimal;

    return 0;
}