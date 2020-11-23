#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void pennyForPay();
void oceanLevels();

int main()	{
	
	//3. Ocean Levels
	//oceanLevels();
	//7. Pennies for Pay
	//pennyForPay();
	return 0;
}

/*Assuming the ocean's levelis currently rising at about 1.5 mmm per year, 
write a program that displays a table showing the number of mm that the ocean 
will have risen each year for the next 25 years 	*/
void oceanLevels()	{
	int years = 25;
	float oceanLvl = 1.5;
	for( int i=0;i<years;i++ )	{
		cout << "The ocean's current level has risen " << oceanLvl << "mm since " << i << " years ago\n\n";
		oceanLvl+=1.5;
	}	
}

void pennyForPay()	{
	int days, sheckels;
	float dis;
	float counter=.01;
	cout << "Enter how many days you would like to save for: ";
	cin >> days;
	while( days > 0 )	{
		counter*=2;
		days--;
		dis = counter;
	}
	cout << showpoint << setprecision(2) << fixed;
	cout << "\n$ "<< counter/2 << setw(2) << endl;
	cout << "\nThe money on the last day saved was $" << counter/4;
	
	return;
}
