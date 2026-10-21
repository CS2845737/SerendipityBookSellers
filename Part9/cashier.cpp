#include "cashier.h"
#include "bookinfo.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 20;

extern string bookTitle[SIZE];
extern string isbn[SIZE];
extern string author[SIZE];
extern string publisher[SIZE];
extern string dateAdded[SIZE];
extern int qtyOnHand[SIZE];
extern double wholesale[SIZE];
extern double retail[SIZE];

void cashier()
{
	int choice = 0;
	while (choice != 2)
	{
		string date = "";
		int quan = 0;
		bool pass = true;

		cout << "Serendipity Book Sellers\n";
		cout << " Cashier Module\n\n";

		cout << "Please enter the ISBN number: ";
		string isbnNumber;
		bool found = false;
		cin.ignore();
		getline(cin, isbnNumber);
		cout << "Please enter the quantity of books: ";
		cin >> quan;
		while (choice != 2)
		{
			for (int x = 0; x < SIZE; x++)
			{
				if (isbnNumber == isbn[x])
				{
					found = true;
					if (quan > qtyOnHand[x])
					{
						cout << "Not enough books in stock. Please enter a quantity less than or equal to " << qtyOnHand[x] << ".\n";
					}
					else
					{
						qtyOnHand[x] -= quan;
						cout << "Add another title to this order?\n1. Yes\n2. No\n";
						cout << "Enter your choice: ";
						cin >> choice;
						while (choice != 1 && choice != 2)
						{
							cout << "Invalid choice. Please enter a number in the range 1-2: ";
							cin >> choice;
						} 
						if (choice == 2)
						{
							cout << "Serendipity Book Sellers\n\n";
							cout << "Date:" << dateAdded[x] << " \n\n";
							cout << "QTY\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n";
							cout << "_________________________________________";
							cout << "_________________________________________";
							cout << "\n\n\n";

							cout << quan << "\t";

							cout << left << setw(14) << isbn[x] << "\t";

							cout << left << setw(26) << bookTitle[x] << "\t$ ";

							cout << fixed << showpoint << right << setprecision(2);

							cout << left << setw(6) << retail[x] << "\t$ ";
							cout << left << retail[x] * quan;
							cout << "\n\n\n";

							cout << "\t\tSubtotal\t\t\t\t\t\t$ " << setw(2) << fixed << retail[x] * quan << "\n";
							cout << "\t\tTax\t\t\t\t\t\t\t$ " << left << (retail[x] * quan) * 0.06 << "\n";
							cout << "\t\tTotal\t\t\t\t\t\t\t$ " << left << (retail[x] * quan) * 1.06 << "\n";
							cout << endl;
							cout << "Thank You for Shopping at Serendipity!\n";
							break;
						}
						
					}
				}
			}
			if (!found)
			{
				cout << "Book not found.\n";
				cout << "Would you like to reenter the ISBN number?\n1. Yes\n2. No\n";
				cout << "Enter your choice: ";
				cin >> choice;
				if (choice != 1 && choice != 2)
				{
					cout << "Invalid choice. Please enter a number in the range 1-2: ";
					cin >> choice;
				}
				if (choice == 1)
				{
					cout << "Please enter the ISBN number: ";
					cin.ignore();
					getline(cin, isbnNumber);
					break;
				}
			}
		}

		cout << "Process Another Transaction?\n1. Yes\n2. No\n";
		cout << "Please enter a number in the range 1-2: ";
		cin >> choice;
		if (choice != 1 && choice != 2)
		{
			cout << "Invalid choice. Please enter a number in the range 1-2: ";
			cin >> choice;
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