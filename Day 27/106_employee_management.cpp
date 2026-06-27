#include <iostream>
#include <string>
using namespace std;

// Structure to store employee details
struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee emp[100];   // Array to store employee records
    int count = 0;       // Number of employees
    int choice;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                // Add employee details
                cout << "\nEnter Employee ID: ";
                cin >> emp[count].id;

                cin.ignore(); // Clear input buffer

                cout << "Enter Employee Name: ";
                getline(cin, emp[count].name);

                cout << "Enter Salary: ";
                cin >> emp[count].salary;

                count++;
                cout << "\nEmployee added successfully!\n";
                break;

            case 2:
                // Display all employee records
                if (count == 0)
                {
                    cout << "\nNo employee records found.\n";
                }
                else
                {
                    cout << "\nEmployee Records:\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "\nEmployee " << i + 1 << endl;
                        cout << "ID     : " << emp[i].id << endl;
                        cout << "Name   : " << emp[i].name << endl;
                        cout << "Salary : " << emp[i].salary << endl;
                    }
                }
                break;

            case 3:
            {
                // Search employee by ID
                int searchID;
                bool found = false;

                cout << "\nEnter Employee ID to Search: ";
                cin >> searchID;

                for (int i = 0; i < count; i++)
                {
                    if (emp[i].id == searchID)
                    {
                        cout << "\nEmployee Found!\n";
                        cout << "ID     : " << emp[i].id << endl;
                        cout << "Name   : " << emp[i].name << endl;
                        cout << "Salary : " << emp[i].salary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "\nEmployee not found.\n";
                }

                break;
            }

            case 4:
                cout << "\nThank you for using the Employee Management System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}