#include <iostream>

using namespace std;

void printMenu( )	{
	int choice = 0;
	cout << "Serendipity Booksellers\n";
	cout << "		Main Menu\n\n";
	cout << "1. Cashier Module\n";
	cout << "2. Inventory Database Module\n";
	cout << "3. Report Module\n";
	cout << "4. Exit\n\n";
	
	cout << "Enter your choice: ";
	cin >> choice;
	cout << choice << "\n";
	return;
}

int main()	{
	
	printMenu( );
	
	return 0;
}
