#include <iostream>

using namespace std;

void printInventoryDB()	{
	int choice;
	
	cout << "Serendipity Booksellers\n";
	cout << "Inventory Database\n\n";
	
	cout << "1. Look Up a Book\n";
	cout << "2. Add a Book\n";
	cout << "3. Edit a Book's Record\n";
	cout << "4. Delete a Book\n";
	cout << "5. Return to the Main Menu\n\n";
	
	cout << "Enter Your Choice: \n";
	cin >> choice;
	
	while(choice < 1 || choice > 5)	{
		cout << "Error: Please enter a number in the range 1-5\n";
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
		case 5: 
			cout << "\nYou selected item 5\n";
			break;
	}
	return;
}

int main()	{
	printInventoryDB();
	
	return 0;
}
