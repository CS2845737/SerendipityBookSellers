#include "bookInfo.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void bookInfo(string iSBN, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
        cout << "Serendipity Booksellers\n";
        cout << "   Book Information\n\n";
        cout << "ISBN: " << iSBN << "\n";
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Publisher: " << publisher << "\n";
        cout << "Date Added: " << date << "\n";
        cout << "Quantity-On-Hand: " << qty << "\n";
        cout << "wholesale Cost: $" << fixed << setprecision(2) << wholesale << "\n";
        cout << "Retail Price: $" << fixed << setprecision(2) << retail << "\n";

        cout << "\n\n";
}