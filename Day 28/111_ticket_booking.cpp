#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age, tickets;
    float ticketPrice = 200;   // Price of one ticket
    float totalAmount;
    int choice;

    cout << "===== TICKET BOOKING SYSTEM =====\n";

    // User Details
    cout << "Enter Your Name: ";
    getline(cin, name);

    cout << "Enter Your Age: ";
    cin >> age;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Show Booking Details\n";
        cout << "3. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                // Book Ticket
                cout << "Enter Number of Tickets: ";
                cin >> tickets;

                totalAmount = tickets * ticketPrice;

                cout << "\nTicket Booked Successfully!\n";
                cout << "Total Amount = Rs. " << totalAmount << endl;
                break;

            case 2:
                // Display Booking Details
                cout << "\n----- Booking Details -----\n";
                cout << "Name             : " << name << endl;
                cout << "Age              : " << age << endl;
                cout << "Tickets Booked   : " << tickets << endl;
                cout << "Ticket Price     : Rs. " << ticketPrice << endl;
                cout << "Total Amount     : Rs. " << totalAmount << endl;
                break;

            case 3:
                // Exit
                cout << "Thank You for Using Ticket Booking System!\n";
                break;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }

    } while(choice != 3);

    return 0;
}