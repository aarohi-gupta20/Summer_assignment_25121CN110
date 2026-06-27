#include <iostream>
#include <string>
using namespace std;

// Structure to store student details
struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s[100];   // Array to store records
    int count = 0;    // Number of students
    int choice;

    do
    {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                // Add student record
                cout << "\nEnter Roll Number: ";
                cin >> s[count].rollNo;

                cin.ignore(); // Clear input buffer

                cout << "Enter Name: ";
                getline(cin, s[count].name);

                cout << "Enter Marks: ";
                cin >> s[count].marks;

                count++;
                cout << "Student record added successfully!\n";
                break;

            case 2:
                // Display all student records
                if (count == 0)
                {
                    cout << "\nNo records found.\n";
                }
                else
                {
                    cout << "\nStudent Records:\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "Roll Number: " << s[i].rollNo << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                    }
                }
                break;

            case 3:
            {
                // Search student by roll number
                int roll;
                bool found = false;

                cout << "\nEnter Roll Number to Search: ";
                cin >> roll;

                for (int i = 0; i < count; i++)
                {
                    if (s[i].rollNo == roll)
                    {
                        cout << "\nStudent Found!\n";
                        cout << "Roll Number: " << s[i].rollNo << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "Student not found.\n";
                }
                break;
            }

            case 4:
                cout << "\nThank you for using the program!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}