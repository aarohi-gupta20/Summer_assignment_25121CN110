#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;

    // Input string
    cout << "Enter a String: ";
    getline(cin, str);

    do
    {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                // Display string
                cout << "String: " << str << endl;
                break;

            case 2:
                // Find length
                cout << "Length = " << str.length() << endl;
                break;

            case 3:
            {
                // Reverse string
                string rev = "";

                for(int i = str.length() - 1; i >= 0; i--)
                {
                    rev = rev + str[i];
                }

                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 4:
                // Convert to uppercase
                for(int i = 0; i < str.length(); i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                    {
                        str[i] = str[i] - 32;
                    }
                }

                cout << "Uppercase String: " << str << endl;
                break;

            case 5:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}