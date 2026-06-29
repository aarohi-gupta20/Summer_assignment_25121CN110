#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int accountNumber;
    float balance = 0;
    float amount;
    int choice;

    cout << "===== BANK ACCOUNT SYSTEM =====\n";

    // Create Account
    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                // Deposit Money
                cout << "Enter Amount to Deposit: ";
                cin >> amount;

                balance = balance + amount;

                cout << "Money Deposited Successfully!\n";
                break;

            case 2:
                // Withdraw Money
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;

                if(amount <= balance)
                {
                    balance = balance - amount;
                    cout << "Money Withdrawn Successfully!\n";
                }
                else
                {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 3:
                // Show Balance
                cout << "Current Balance = Rs. " << balance << endl;
                break;

            case 4:
                // Display Account Details
                cout << "\n----- Account Details -----\n";
                cout << "Account Holder : " << name << endl;
                cout << "Account Number : " << accountNumber << endl;
                cout << "Balance        : Rs. " << balance << endl;
                break;

            case 5:
                cout << "Thank You for Using Bank Account System!\n";
                break;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }

    } while(choice != 5);

    return 0;
}