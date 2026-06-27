#include <iostream>
#include <string>
using namespace std;

// Structure to store student details
struct Student
{
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
};

int main()
{
    Student s;

    // Input student details
    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    // Input marks
    s.total = 0;

    cout << "\nEnter Marks of 5 Subjects:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];

        s.total = s.total + s.marks[i];
    }

    // Calculate percentage
    s.percentage = s.total / 5.0;

    // Display marksheet
    cout << "\n========== MARKSHEET ==========\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;

    cout << "\nSubject Marks\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : " << s.marks[i] << endl;
    }

    cout << "\nTotal Marks : " << s.total << "/500" << endl;
    cout << "Percentage : " << s.percentage << "%" << endl;

    // Check Pass or Fail
    if(s.percentage >= 33)
    {
        cout << "Result : PASS" << endl;
    }
    else
    {
        cout << "Result : FAIL" << endl;
    }

    return 0;
}