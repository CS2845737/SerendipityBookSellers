#include <iostream>
using namespace std;

#include "bookInfo.h"
#include "cashier.h"
#include "invMenu.h"
#include "reports.h"

//constant for array sizes
const int SIZE = 20;

//Global Arrays
string bookTitle[SIZE];
string iSBN[SIZE];
string bookAuthor[SIZE];
string publisher[SIZE];
string date[SIZE];
int qty[SIZE];
double wholesale[SIZE];
double retail[SIZE];

int main()
{
	int choice = 0; //To hold the user's menu choice

    while (choice != 4)
    {
	    cout << "Serendipty Booksellers\n";
	    cout << "\tMain Menu\n\n";
	
	    cout << "1. Cashier Module\n";
	    cout << "2. Inventory Database Module\n";
	    cout << "3. Report Module\n";
	    cout << "4. Exit\n\n";
	
	    //Get the menu choice as input from the user
	    cout << "Enter Your Choice: ";
	    cin >> choice;
	    while (choice > 4 || choice < 1){
	            if (choice > 4 || choice < 1){
                    cout << "Please enter a number in the range 1-4.";
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
				//cout << "\nYou selected cashier. \n";
				cashier();
				break;
			case 2:
				//invMenu();
				invMenu();
				break;
			case 3:
				//reports();
				cout << "\nYou selected reports. \n";
				break;
			case 4:
				cout << "\nYou selected item 4. \n";
				break;
		}


	}

	cout << endl;
    return 0;
}