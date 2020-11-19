#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printReceipt()	{
	char theDate[10], isbn[15], title[100];
	int numBooks;
	float price = 19.95;
	float tax = .06;
	cout << "Enter the date: " << endl;
	cin >> theDate;
	cout << "Enter the number of books being purchased: " << endl;
	cin >> numBooks;
	cout << "Enter the ISBN number: " << endl;
	cin >> isbn;
	cout << "Enter the title: " << endl;
	cin >> title;
	cout << "\n\nSerendipity Booksellers\n\n";
	float grandTotal = price * numBooks;
	cout << "Date: " << theDate << "\n\n";
	cout << "Qty\tISBN\tTitle\t\tPrice\tTotal\n";
	cout << "________________________________________________\n";
	cout << setprecision(2) << setw(6) << fixed;
	cout << numBooks << "\t" << isbn << "\t" << title << "\t\t$" << price << "\t$" << grandTotal << "\n\n";
	cout << "\t\tSubtotal\t\t$" << grandTotal << endl;
	float grandTax = grandTotal * tax;
	cout << "\t\tTax\t\t\t$" << grandTax << endl;
	float finalPrice = grandTotal + grandTax;
	cout << "\t\tTotal\t\t\t$" << finalPrice << endl;
	
	cout << "Thank You for Shopping at Serendipity!\n";
	
}

int main()	{
	
	printReceipt();
	return 0;
}
