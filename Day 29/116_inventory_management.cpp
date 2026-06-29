#include <iostream>
#include <string>
using namespace std;

int main()
{
    string itemName[100];
    int quantity[100];
    float price[100];

    int totalItems = 0;
    int choice;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        cin.ignore(); // Clear input buffer

        switch(choice)
        {
            case 1:
                // Add a new item
                cout << "Enter Item Name: ";
                getline(cin, itemName[totalItems]);

                cout << "Enter Quantity: ";
                cin >> quantity[totalItems];

                cout << "Enter Price: ";
                cin >> price[totalItems];

                totalItems++;

                cout << "Item Added Successfully!\n";
                break;

            case 2:
                // Display all items
                if(totalItems == 0)
                {
                    cout << "No Items Available.\n";
                }
                else
                {
                    cout << "\n----- Inventory List -----\n";
                    for(int i = 0; i < totalItems; i++)
                    {
                        cout << "\nItem " << i + 1 << endl;
                        cout << "Name     : " << itemName[i] << endl;
                        cout << "Quantity : " << quantity[i] << endl;
                        cout << "Price    : Rs. " << price[i] << endl;
                    }
                }
                break;

            case 3:
            {
                // Search an item
                string searchItem;
                bool found = false;

                cout << "Enter Item Name to Search: ";
                getline(cin, searchItem);

                for(int i = 0; i < totalItems; i++)
                {
                    if(itemName[i] == searchItem)
                    {
                        cout << "\nItem Found!\n";
                        cout << "Name     : " << itemName[i] << endl;
                        cout << "Quantity : " << quantity[i] << endl;
                        cout << "Price    : Rs. " << price[i] << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Item Not Found.\n";
                }

                break;
            }

            case 4:
                cout << "Thank You for Using Inventory Management System!\n";
                break;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }

    } while(choice != 4);

    return 0;
}