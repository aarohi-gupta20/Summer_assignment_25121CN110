#include <iostream>
#include <string>
using namespace std;

int main()
{
    string books[100];
    int totalBooks = 0;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // Clear input buffer

        switch (choice)
        {
            case 1:
                // Add a new book
                cout << "Enter Book Name: ";
                getline(cin, books[totalBooks]);

                totalBooks++;
                cout << "Book Added Successfully!\n";
                break;

            case 2:
                // Display all books
                if (totalBooks == 0)
                {
                    cout << "No Books Available.\n";
                }
                else
                {
                    cout << "\nAvailable Books:\n";
                    for (int i = 0; i < totalBooks; i++)
                    {
                        cout << i + 1 << ". " << books[i] << endl;
                    }
                }
                break;

            case 3:
            {
                // Search a book
                string searchBook;
                bool found = false;

                cout << "Enter Book Name to Search: ";
                getline(cin, searchBook);

                for (int i = 0; i < totalBooks; i++)
                {
                    if (books[i] == searchBook)
                    {
                        cout << "Book Found at Position " << i + 1 << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "Book Not Found.\n";
                }

                break;
            }

            case 4:
                cout << "Thank You for Using Library Management System!\n";
                break;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}