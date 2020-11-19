//Daniel Curtis  11/12/2020
//Chapter 2 Programming Challenges

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

void sumTwoNum();
void salesPrediction();
void salesTax();
void restaurantBill( double x );
void stadiumSeating();
void fiveTestAvg();
void saveNum();
void celsiusToFarenheit( double degrees);
void interestEarned();
void timeCalculator();
void geometryCalculator();


int main()	{
	/////////Chapter 2////////
	//1. Sum of Two Numbers
	//sumTwoNum();
	//2. Sales Prediction
	//salesPrediction();
	//3. Sales Tax
	//salesTax();
	//4. Restaurant Bill
	//restaurantBill( 44.50 );
	/////////Chapter 3////////
	//2. Stadium Seating
	//stadiumSeating();
	//3. Test Average
	//fiveTestAvg();
	//10. Celsius to Farenheit
	//celsiusToFarenheit( 100.0 );
	//16. Interest Earned
	//interestEarned();
	//21. Saving Numbers to a File
	//saveNum();
	/////////Chapter 4////////
	//7. Time Calculator
	//timeCalculator();
	geometryCalculator();
	
	
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

/* 	Write a program that asks how many tickets for each class of seats were sold
	then displays the amount of income generated. Format your dollar amount to 
	be foramtted in fixed-point notation with one decimal point of precision    	*/
void displayIncome( int a, int b, int c )	{
	double tots = a+b+c;
	cout << setprecision(2) << fixed;
	cout << "\nTotal Amount generated: " << tots << endl;
	return;
}	

void stadiumSeating()	{
	const double A = 15.0;
	const double B = 12.0;
	const double C = 9.0;
	int totalA, totalB, totalC;
	cout << "\nEnter how many tickets of Class A were sold: ";
	cin >> totalA;
	cout << "\nEnter how many tickets of Class B were sold: ";
	cin >> totalB;
	cout << "\nEnter how many tickets of Class C were sold: ";
	cin >> totalC;
	displayIncome(totalA * A, totalB * B, totalC * C);
	return;
}

/*  Write a program that calculates the average test score for 5 test scores	*/
void fiveTestAvg()	{
	const double testTotal = 5.0;
	double test1, test2, test3, test4, test5;
	cout << "Enter 5 test scores: \n";
	cin >> test1 >> test2 >> test3 >> test4 >> test5;
	const double avg = (test1 + test2 + test3 + test4 + test5) / testTotal;
	cout << setprecision(1) << fixed;
	cout << "Test Average for these 5 foos is: " << avg << endl;
	return;
}

/* 	Write a program that converts Celsius temperatures to Fahrenheit temperatures	*/
void celsiusToFarenheit( double F )	{
	double nineFifths = 1.8;
	double celsius = nineFifths * F + 32;
	cout << F << " degrees in Celsius is " << celsius << " degrees in Fahrenheit\n";
	
}

/*   Write a program that asks for the principal, the interest rate, and the number of times
	the interest is compounded during a year( T is 4 if the interest is compounded quarterly)  */
void interestEarned()	{
	//input from user: principal, interest rate, number of times compounded
	double principal, interestRate;
	int numCompounded;
	cout << "\nEnter the total balance of the savings account: ";
	cin >> principal;
	cout << "\nEnter the interest rate for the savings account: ";
	cin >> interestRate;
	cout << "\nEnter the total number of times the interest has compounded: \n";
	cin >> numCompounded;
	cout << "\nReport\n\n";
	double amt = principal * pow( (1 + ( interestRate/numCompounded ) ), numCompounded);
	double interestTotal = amt - principal;
	double formatInt = interestRate * 100;
	cout << right;
	cout << "Interest Rate: \t\t" << setw(8) << setprecision(2) << fixed << formatInt << "%" << endl;
	cout << "Times Compounded: \t" << setw(8) << numCompounded << endl;
	cout << setw(8) << setprecision(2) << showpoint;
	cout << "Principal: \t\t$" << principal << endl;
	cout << "Interest: \t\t$" << interestTotal << endl;
	cout << "Amount in Savings: \t$" << amt << endl;
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
	cout << "\nFile has been created and numbers added...";
	return;
}
void printFiveNumbers()	{
	ifstream inputFile;
	inputFile.open( "fiveNum.txt" );
	int num;
	cout << "\nNow we are gonna print them numbies!\n";
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

/*	Write a program that asks the user to enter seconds and then calculate how many days, hours, and minutes	*/
void timeCalculator()	{
	long int totalSeconds;
	bool boo = false;
	cout << "Enter total number of seconds: ";
	cin >> totalSeconds;
	long int grandTotal=totalSeconds;
	cout << "\nThere is ";
	if( totalSeconds < 60 )	{
		cout << "There is " << totalSeconds << " seconds";
	}
	while( totalSeconds > 60 ){
		if( boo )	cout << " and ";
		if( totalSeconds >= 60 && totalSeconds < 3600 )	{
			long int help = totalSeconds/60;
			cout << help << " minutes ";
			totalSeconds = totalSeconds%60;
			boo=true;
		}
		else if( totalSeconds >= 3600 && totalSeconds < 86400 )	{
			long int help = totalSeconds/3600;
			cout << help << " hours";
			totalSeconds = totalSeconds%3600;
			boo=true;
		}
		else	{
			long int help = totalSeconds/86400;
			cout << help << " day(s)";
			totalSeconds = totalSeconds%86400;
			boo=true;
		}
		
	}
	cout << " and " << totalSeconds << " seconds in " << grandTotal << " seconds"  << endl;
}
void areaOfCircle()	{
	double radius;
	cout << "\nEnter the radius of the circle: ";
	cin >> radius;
	double area = M_PI * pow(radius, 2.0);
	cout << "\nThe area for that shit is " << area << endl;
}
void areaOfRectangle()	{
	double length, width;
	cout << "\nEnter the length of the rectangle: ";
	cin >> length;
	cout << "\nEnter the width of the rectangle: ";
	cin >> width;
	double area = length * width;
	cout << "\nThe area for that shit is " << area << endl;
}
void areaOfTriangle()	{
	double base, height;
	cout << "\nEnter the base of the triangle: ";
	cin >> base;
	cout << "\nEnter the height of the triangle: ";
	cin >> height;
	double area = base * (height / 2.0);
	cout << "\nThe area for that shit is " << area << endl;
}
void geometryCalculator()	{
	int choice;
	cout << "Starting Geometry Calculator...\n\n";
	
	cout << "\t\t***Geometry Calculator***\t\t\n";
	cout << "1. Calculate the Area of a Circle.\n";
	cout << "2. Calculate the Area of a Rectangle.\n";
	cout << "3. Calculate the Area of a Triangle.\n";
	cout << "4. Quit.\n"; 
	cout << "Enter your choice (1-4): ";
	cin >> choice;
	if( choice < 1 || choice > 4 )	{
		cout << "Error: Invalid choice dummy\n";
		return;
	}
	switch(choice){
		case 1:
			areaOfCircle();
			break;
		case 2:
			areaOfRectangle();
			break;
		case 3:
			areaOfTriangle();
			break;
		case 4:
			exit(0);
			break;
		default: 
			break;	
	}
	return;
}
