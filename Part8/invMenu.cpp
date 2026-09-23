#include "invMenu.h"
#include "bookInfo.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 20;

extern string bookTitle[SIZE];
extern string iSBN[SIZE];
extern string bookAuthor[SIZE];
extern string publisher[SIZE];
extern string date[SIZE];
extern int qty[SIZE];
extern double wholesale[SIZE];
extern double retail[SIZE];

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
    cout << "Please enter the book title: ";
    string book;
    cin.ignore();
    getline(cin, book);
    for (int x = 0; x < SIZE; x++)
    {
        if (book == bookTitle[x])
        {
           bookInfo(bookTitle[x], iSBN[x], bookAuthor[x], publisher[x], date[x], qty[x], wholesale[x], retail[x]);
           break;
        }
    }
    cout << "Book not found.\n";
}

void addBook()
{
    for (int x = 0; x < SIZE; x++)
    {
        if (bookTitle[x] == "")
        {
            cout << "Enter the book title: ";
            cin.ignore();
            getline(cin, bookTitle[x]);
            cout << "Enter the ISBN: ";
            getline(cin, iSBN[x]);
            cout << "Enter the author: ";
            getline(cin, bookAuthor[x]);
            cout << "Enter the publisher: ";
            getline(cin, publisher[x]);
            cout << "Enter the date added: ";
            getline(cin, date[x]);
            cout << "Enter the quantity on hand: ";
            cin >> qty[x];
            cout << "Enter the wholesale cost: ";
            cin >> wholesale[x];
            cout << "Enter the retail price: ";
            cin >> retail[x];
            break;
        }
    }
}

void editBook()
{
    cout << "Please enter the book title: ";
    string book;
    cin.ignore();
    getline(cin, book);
    for (int x = 0; x < SIZE; x++)
    {
        if (book == bookTitle[x])
        {
           bookInfo(bookTitle[x], iSBN[x], bookAuthor[x], publisher[x], date[x], qty[x], wholesale[x], retail[x]);
           cout << "Which field would you like to edit?\n";
           cout << "1. Book Title\n";
           cout << "2. ISBN\n";
           cout << "3. Author\n";
           cout << "4. Publisher\n";
           cout << "5. Date Added\n";
           cout << "6. Quantity on Hand\n";
           cout << "7. Wholesale Cost\n";
           cout << "8. Retail Price\n";
           int choice;
           cout << "Enter your choice: ";
           cin >> choice;
           switch(choice)
           {
            case 1:
                cout << "Enter the new book title: ";
                cin.ignore();
                getline(cin, bookTitle[x]);
                break;
            case 2:
                cout << "Enter the new ISBN: ";
                cin.ignore();
                getline(cin, iSBN[x]);
                break;
            case 3:
                cout << "Enter the new author: ";
                cin.ignore();
                getline(cin, bookAuthor[x]);
                break;
            case 4:
                cout << "Enter the new publisher: ";
                cin.ignore();
                getline(cin, publisher[x]);
                break;
            case 5:
                cout << "Enter the new date added: ";
                cin.ignore();
                getline(cin, date[x]);
                break;
            case 6:
                cout << "Enter the new quantity on hand: ";
                cin >> qty[x];
                break;
            case 7:
                cout << "Enter the new wholesale cost: ";
                cin >> wholesale[x];
                break;
            case 8:
                cout << "Enter the new retail price: ";
                cin >> retail[x];
                break;
           }
        }
    }
    cout << "Book not found.\n";
}


void deleteBook()
{
    cout << "Please enter the book title: ";
    string book;
    cin.ignore();
    getline(cin, book);
    for (int x = 0; x < SIZE; x++)
    {
        if (book == bookTitle[x])
        {
           bookInfo(bookTitle[x], iSBN[x], bookAuthor[x], publisher[x], date[x], qty[x], wholesale[x], retail[x]);
           break;
           cout << "Are you sure you want to delete this book? (Y/N): ";
           char choice;
           cin >> choice;
           if (choice == 'Y' || choice == 'y')
           {
                bookTitle[x] = "";
                iSBN[x] = "";
                bookAuthor[x] = "";
                publisher[x] = "";
                date[x] = "";
                qty[x] = 0;
                wholesale[x] = 0.0;
                retail[x] = 0.0;
                cout << "Book deleted.\n";
           }
           break;
        }
    }
    cout << "Book not found.\n";
}