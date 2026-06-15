#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long result = 1;

    // Input base value
    cout << "Enter base (x): ";
    cin >> x;

    // Input power value
    cout << "Enter power (n): ";
    cin >> n;

    // If power is 0, result is always 1
    if (n == 0) {
        cout << "Result = 1";
    }
    else {
        // Multiply base 'n' times
        for (int i = 1; i <= n; i++) {
            result = result * x;  // repeated multiplication
        }

        // Print final answer
        cout << "Result = " << result;
    }

    return 0;
}