#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largest = -1;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            largest = i;
        }
    }

    if (largest != -1)
        cout << "Largest prime factor = " << largest;
    else
        cout << "No prime factor found";

    return 0;
}