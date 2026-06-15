#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for (int i = start; i <= end; i++) {
        int temp = i;
        int sum = 0;

        while (temp != 0) {
            int digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == i) {
            cout << i << " ";
        }
    }

    return 0;
}