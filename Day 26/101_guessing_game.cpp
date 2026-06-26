#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main()
{
    int randomNumber, guess;

    // Generate a different random number every time the program runs
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    // Keep asking until the correct number is guessed
    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess > randomNumber)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << " Congratulations! You guessed the correct number." << endl;
        }

    } while (guess != randomNumber);

    cout << "Game Over!" << endl;

    return 0;
}