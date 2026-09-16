#include "invMenu.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void invMenu()
{
    int choice = 0;
    while (choice != 5)
    {
        cout << "Serendipity Booksellers\n";
        cout << "   Inventory Database\n\n";
        cout << "1. Look Up a Book\n";
        cout << "2. Add a Book\n";
        cout << "3. Edit a Book's Record\n";
        cout << "4. Delete a Book\n";
        cout << "5. Return to the main Menu\n";
        cout << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        while (choice > 5 || choice < 1){
            if (choice > 5 || choice < 1){
                cout << "Please enter a number in the range 1-5.";
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
			lookUpBook();
			break;
		case 2:
			addBook();
			break;
		case 3:
			editBook();
			break;
		case 4:
			deleteBook();
			break;
        case 5:
            cout << "You selected option 5.";
            break;
        }
    }
}

//Look up book stub function
void lookUpBook()
{
    cout << "You selected a book.\n";
}

void addBook()
{
    cout << "You added a book.\n";
}
void editBook()
{
    cout << "You edited a book.\n";
}
void deleteBook()
{
     cout << "You deleted a book.\n";
}