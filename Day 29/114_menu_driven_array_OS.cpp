#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, i, search, found = 0, sum = 0;

    // Input array size
    cout << "Enter Number of Elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter Array Elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Search Element\n";
        cout << "3. Find Sum of Elements\n";
        cout << "4. Find Largest Element\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                // Display array
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                // Search element
                cout << "Enter Element to Search: ";
                cin >> search;

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == search)
                    {
                        found = 1;
                        break;
                    }
                }

                if(found)
                    cout << "Element Found at Position " << i + 1 << endl;
                else
                    cout << "Element Not Found!" << endl;

                break;

            case 3:
                // Find sum
                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                cout << "Sum of Array Elements = " << sum << endl;
                break;

            case 4:
                // Find largest element
                int largest;
                largest = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }

                cout << "Largest Element = " << largest << endl;
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