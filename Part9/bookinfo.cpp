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

void bookInfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
        cout << "Serendipity Booksellers\n";
        cout << "\tBook Information\n\n";

        cout << "ISBN: " << isbn << "\n";
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Publisher: " << publisher << "\n";
        cout << "Date Added: " << date << "\n";
        cout << "Quantity-On-Hand: " << qty << "\n";
        cout << fixed << setprecision(2);
        cout << "Wholesale Cost: " << wholesale << "\n";
        cout << "Retail Price: " << retail << "\n";
}