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
	
	if(choice < 1 || choice > 5)	{
		cout << "Error: Invalid Value\n";
	}	else	{
		cout << choice << "\n";
	}
}

int main()	{
	printInventoryDB();
	
	return 0;
}
