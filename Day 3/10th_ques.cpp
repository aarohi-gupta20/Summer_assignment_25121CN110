#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting range: ";
    cin >> start;

    cout << "Enter ending range: ";
    cin >> end;

    cout << "Prime numbers are: ";

    for(int n = start; n <= end; n++) {
        int flag = 0;

        if(n <= 1)
            continue;

        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << n << " ";
    }

    return 0;
}