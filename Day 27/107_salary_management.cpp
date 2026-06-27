#include <iostream>
#include <string>
using namespace std;

// Structure to store employee salary details
struct Employee
{
    int id;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    Employee emp[100];   // Array to store employee records
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                // Add employee details
                cout << "\nEnter Employee ID: ";
                cin >> emp[count].id;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, emp[count].name);

                cout << "Enter Basic Salary: ";
                cin >> emp[count].basicSalary;

                cout << "Enter Bonus: ";
                cin >> emp[count].bonus;

                // Calculate total salary
                emp[count].totalSalary = emp[count].basicSalary + emp[count].bonus;

                count++;

                cout << "\nRecord Added Successfully!\n";
                break;

            case 2:
                // Display all salary records
                if(count == 0)
                {
                    cout << "\nNo Records Found.\n";
                }
                else
                {
                    cout << "\nEmployee Salary Records\n";

                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nEmployee " << i + 1 << endl;
                        cout << "ID            : " << emp[i].id << endl;
                        cout << "Name          : " << emp[i].name << endl;
                        cout << "Basic Salary  : " << emp[i].basicSalary << endl;
                        cout << "Bonus         : " << emp[i].bonus << endl;
                        cout << "Total Salary  : " << emp[i].totalSalary << endl;
                    }
                }
                break;

            case 3:
            {
                // Search employee by ID
                int searchID;
                bool found = false;

                cout << "\nEnter Employee ID: ";
                cin >> searchID;

                for(int i = 0; i < count; i++)
                {
                    if(emp[i].id == searchID)
                    {
                        cout << "\nEmployee Found!\n";
                        cout << "ID            : " << emp[i].id << endl;
                        cout << "Name          : " << emp[i].name << endl;
                        cout << "Basic Salary  : " << emp[i].basicSalary << endl;
                        cout << "Bonus         : " << emp[i].bonus << endl;
                        cout << "Total Salary  : " << emp[i].totalSalary << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "\nEmployee Not Found.\n";
                }

                break;
            }

            case 4:
                cout << "\nThank You for Using Salary Management System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while(choice != 4);

    return 0;
}