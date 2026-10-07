#include "cashier.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void cashier()
{
    int choice = 0;
    while (choice != 2)
    {
        string date = "";
        int quan = 0;
        string iSBN = "";
        string title = "";
        float price = 0;
		bool pass = true;
    
        cout << "Serendipity Book Sellers\n";
        cout << " Cashier Module\n\n";
        cout << "Date: ";
        cin >> date;
        cout << "Quantity of Book: ";
        cin >> quan;
        cout << "ISBN: ";
        cin >> iSBN;
        cout << "Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Price: ";
        cin >> price;
    
    
	    cout << "Serendipity Book Sellers\n\n";
	    cout << "Date:" << date << " \n\n";
	    cout << "QTY\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n";
	    cout << "_________________________________________";
		cout << "_________________________________________";
		cout << "\n\n\n";

	    cout << quan << "\t";

	    cout << left << setw(14) << iSBN << "\t";

	    cout << left << setw(26) << title << "\t$ ";
		
		cout << fixed << showpoint << right << setprecision(2);
	    
		cout << left << setw(6) << price << "\t$ ";
		cout << left << price * quan;
        cout << "\n\n\n";



    	cout << "\t\tSubtotal\t\t\t\t\t\t$ " << setw(2) << fixed << price * quan <<"\n";
    	cout << "\t\tTax\t\t\t\t\t\t\t$ " << left << (price * quan) * 0.06 <<"\n";
    	cout << "\t\tTotal\t\t\t\t\t\t\t$ " << left << (price * quan) * 1.06 << "\n";
    	cout << endl;
    	cout << "Thank You for Shopping at Serendipity!\n";
    	cout << "Process Another Transaction?\n1. Yes\n2. No\n";
		cout << "Please enter a number in the range 1-2: ";
    	cin >> choice;
		if (choice != 1 && choice != 2)
		{
			cout << "Invalid choice. Please enter a number in the range 1-2: ";
			pass = false;
		}
    	while (pass == false)
    	{
			choice = 0;
		    cout << "Please enter a number in the range 1-2.";
    	    cout << "Process Another Transaction?\n1. Yes\n2. No\n";
			cin.ignore();
    	    cin >> choice;
    	}
    	cout << endl;
    }
}