#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[100];
    string phone[100];
    int totalContacts = 0;
    int choice;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        cin.ignore();   // Clear input buffer

        switch(choice)
        {
            case 1:
                // Add Contact
                cout << "Enter Contact Name: ";
                getline(cin, name[totalContacts]);

                cout << "Enter Phone Number: ";
                getline(cin, phone[totalContacts]);

                totalContacts++;

                cout << "Contact Added Successfully!\n";
                break;

            case 2:
                // Display Contacts
                if(totalContacts == 0)
                {
                    cout << "No Contacts Found.\n";
                }
                else
                {
                    cout << "\n----- Contact List -----\n";
                    for(int i = 0; i < totalContacts; i++)
                    {
                        cout << "\nContact " << i + 1 << endl;
                        cout << "Name  : " << name[i] << endl;
                        cout << "Phone : " << phone[i] << endl;
                    }
                }
                break;

            case 3:
            {
                // Search Contact
                string searchName;
                bool found = false;

                cout << "Enter Contact Name to Search: ";
                getline(cin, searchName);

                for(int i = 0; i < totalContacts; i++)
                {
                    if(name[i] == searchName)
                    {
                        cout << "\nContact Found!\n";
                        cout << "Name  : " << name[i] << endl;
                        cout << "Phone : " << phone[i] << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Contact Not Found.\n";
                }

                break;
            }

            case 4:
                cout << "Thank You for Using Contact Management System!\n";
                break;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }

    } while(choice != 4);

    return 0;
}