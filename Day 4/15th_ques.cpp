#include <iostream>
using namespace std;

int main() {
    int n, original, sum = 0, rem;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}