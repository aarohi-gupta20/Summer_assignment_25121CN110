#include <iostream>
using namespace std;

int main()
{
    int age;

    // Take age as input from the user
    cout << "Enter your age: ";
    cin >> age;

    // Check voting eligibility
    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}