#include <iostream>
using namespace std;

int main()
{
    int ans;
    int score = 0;

    cout << "===== QUIZ APPLICATION =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for object-oriented programming?\n";
    cout << "1. C++\n2. HTML\n3. SQL\n4. CSS\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 3)
        score++;

    cout << "\nYour Score = " << score << " out of 3";

    return 0;
}