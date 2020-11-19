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
	
	if(choice < 1 || choice > 7)	{
		cout << "Error: Invalid Value\n";
	}	else	{
		cout << choice << "\n";
	}
}

int main()	{
	printReport();
	
	return 0;
}
