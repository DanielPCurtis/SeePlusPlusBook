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
	while(choice < 1 || choice > 4)	{
		cout << "Error: Please enter a number in the range 1-4\n";
	}	
	switch(choice)	{
		case 1: 
			cout << "\nYou selected item 1\n";
			break;
		case 2: 
			cout << "\nYou selected item 2\n";
			break;
		case 3: 
			cout << "\nYou selected item 3\n";
			break;
		case 4: 
			cout << "\nYou selected item 4\n";
			break;
	}
		
	return;
}

int main()	{
	
	printMenu( );
	
	return 0;
}
