//Daniel Curtis  11/12/2020
//Chapter 2 Programming Challenges

#include <iostream>

using namespace std;

void sumTwoNum();
void salesPrediction();
void salesTax();

int main()	{
	//1. Sum of Two Numbers
	sumTwoNum();
	//2. 
	salesPrediction();
	//3. 
	salesTax();
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
