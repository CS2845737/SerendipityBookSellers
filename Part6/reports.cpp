#include "reports.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void reports()
{
    int choice = 0;
    while (choice != 7)
    {
        cout << "1. Inventory Listing\n";
        cout << "2. Inventory Wholesale Value\n";
        cout << "3. Inventory Retail Value\n";
        cout << "4. Listing by Quantity\n";
        cout << "5. Listing by Cost\n";
        cout << "6. Listing by Age\n";
        cout << "7. Return to Main Menu\n\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        while (choice > 7 || choice < 1){
            if (choice > 7 || choice < 1){
                    cout << "Please enter a number in the range 1-7.";
            }
            cout << "Enter Your Choice: ";
            cin >> choice;
        }
    cout << endl;
    cout << "You selected item: " << choice << endl;
    cout << endl;

    switch(choice)
        {
        case 1:
			repListing();
			break;
		case 2:
			repWholesale();
			break;
        case 3: 
            repRetail();
            break;
		case 4:
			repQty();
			break;
		case 5:
			repCost();
			break;
        case 6:
			repAge();
			break;
		case 7:
            cout << "You selected option 5.";
            break;
        }
    }
}

void repListing()
{
    cout << "You selected repListing";
}
void repWholesale()
{
    cout << "You selected repWholesale";
}
void repRetail()
{
    cout << "You selected repRetail";
}
void repQty()
{
    cout << "You selected repQty";
}
void repCost()
{
    cout << "You selected repCost";
}
void repAge()
{
    cout << "You selected repAge";
}