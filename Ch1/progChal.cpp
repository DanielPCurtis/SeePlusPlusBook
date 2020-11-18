//Daniel Curtis  11/12/2020
//Chapter 2 Programming Challenges

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void sumTwoNum();
void salesPrediction();
void salesTax();
void restaurantBill( double x );
void stadiumSeating();
void saveNum();

int main()	{
	/////////Chapter 2////////
	//1. Sum of Two Numbers
	sumTwoNum();
	//2. Sales Prediction
	salesPrediction();
	//3. Sales Tax
	salesTax();
	//4. Restaurant Bill
	restaurantBill( 44.50 );
	/////////Chapter 3////////
	//2. Stadium Seating
	stadiumSeating();
	//21. Saving Numbers to a File
	saveNum();
	
	
	
}
/* 	Write a program that stores the integers 62 and 99 in variables	
	and stores the sum of these two in a variable named total 		*/

void sumTwoNum()	{
	int sixtyTwo = 62;
	int ninetyNine = 99;
	int total = sixtyTwo + ninetyNine;
	cout << "The result of adding 62 and 99 is: " << total << "\n\n";
}

/*	Write a program that will predict how much the East Coast division
	will generate if the company has $4.6 million in sales this year	*/
void salesPrediction()	{
	double totalSales = 4600000.0;
	double tax = 0.62;
	double result = tax * totalSales;
	cout << "The East Coast division will generate $" << result << "\n\n";
}

/*	Write a program that will compute the total sales tax on a $52 purchase
	Assume the state sales tax is 4% and the county sales tax is 2%			*/
void salesTax()	{
	double purch = 52.0;
	double countySalesTax = .02;
	double stateSalesTax = .04;
	double total = (purch * countySalesTax ) + ( purch * stateSalesTax ) ;
	cout << "The total sales tax on a $52 purchase is: " << total << "\n\n";
}

/*	Write a program that computes the tax and tip on a restaurant bill for a 
	patron with a $44.50 meal charge.  */ 
void restaurantBill( double x )	{
	double tax = .0675 * x;
	double tip = .15 * x;
	double total = x + tax + tip;
	cout << "Meal Cost: $" << setprecision(2) << fixed << x << "\n";
	cout << "Tax Amount: $" << setprecision(2) << fixed << tax << "\n";
	cout << "Tip Amount: $" << setprecision(2) << fixed << tip << "\n";
	cout << "Grand Total: $" << setprecision(2) << fixed << total << "\n";
}

/*	Wrte 2 programs:
	Write a program that asks the user to enter five numbers. Create a file and save all five numbers
	Write a program that opens the file created reads the five numbers and displays them, 
	then display and calculate sum */
void enterFiveNumbers()	{
	ofstream outputFile;
	outputFile.open( "fiveNum.txt" );
	int a,b,c,d,e;
	
	cout << "Enter five numbers: ";
	cin >> a >> b >> c >> d >> e;
	outputFile  << a << endl;
	outputFile  << b << endl;
	outputFile  << c << endl;
	outputFile  << d << endl;
	outputFile  << e << endl;
	outputFile.close();
	return;
}

void printFiveNumbers()	{
	ifstream inputFile;
	inputFile.open( "fiveNum.txt" );
	int num;
	
	inputFile >> num;
	cout << num <<"\n";
	inputFile >> num;
	cout << num <<"\n";
	inputFile >> num;
	cout << num <<"\n";
	inputFile >> num;
	cout << num <<"\n";
	inputFile >> num;
	cout << num <<"\n";
	inputFile.close();
	return;
}
	
void saveNum()	{
	enterFiveNumbers();
	printFiveNumbers();
}
