#include <iostream>
#include <cmath>

using namespace std;

void printReceipt()	{
	cout << "Serendipity Booksellers\n\n";
	
	cout << "Date: \n\n";
	cout << "Qty\tISBN\tTitle\t\tPrice\tTotal\n";
	cout << "________________________________________________\n\n\n";
	cout << "\t\tSubtotal\n";
	cout << "\t\tTax\n";
	cout << "\t\tTotal\n\n";
	
	cout << "Thank You for Shopping at Serendipity!\n";
	
}

int main()	{
	
	printReceipt();
	return 0;
}
