#include <iostream>

using namespace std;

void printReport()	{
	int choice;
	
	cout << "Serendipity Booksellers\n";
	cout << "Reports\n\n";
	
	cout << "1. Inventory Listing\n";
	cout << "2. Inventory Wholesale Listing\n";
	cout << "3. Inventory Retail Value\n";
	cout << "4. Listing by Quantity\n";
	cout << "5. Listing by Cost\n";
	cout << "6. Listing by Age\n";
	cout << "7. Return to the Main Menu\n\n";
	
	cout << "Enter Your Choice: \n";
	cin >> choice;
	
	while(choice < 1 || choice > 7)	{
		"Error: Please enter a number in the range 1-7\n"
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
		case 6: 
			cout << "\nYou selected item 6\n";
			break;
		case 7: 
			cout << "\nYou selected item 7\n";
			break;
	}
	
	return;
}

int main()	{
	printReport();
	
	return 0;
}
