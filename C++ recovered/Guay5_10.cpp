/*********************************************************
* file name: Guay5_10
* programmer name: Christopher Guay
* date created: 10/06/17
* date of last revision: 10/06/17
* details of the revision: none
* short description:  Rainfall calculations
**********************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Program description
	cout << "This program will calculate the number of months of rainfall, \nthe average rainfall, and total rainfall for a period of N years." << endl;

	// Declaring the variables: types and names

	int years;
	int rainfall;
	int countY;
	int countM = 0;
	int months;
	double average;
	int total=0;

	// Variable initialization: getting the input from the user
	
	cout << "Please enter the number of years you wish to analyze." << endl;
	cin >> years;
	if (years > 0)
	{
		// Calculations

		for (countY = 1; countY <= years; countY++)
		{
			for (countM = 1; countM <= 12; countM++)
			{
				cout << "Please enter the amount of rainfall in inches for year " << countY << ", month " << countM << "." << endl;
				cin >> rainfall;
				if (rainfall > 0)
				{
					total += rainfall;
				}
				else {
					cout << "rainfall cannot be negative! Please input a valid number of inches of rainfall." << endl;
					countM--;
				}
			}

		}
		// Display the results
		months = years * 12;
		average = total / (months);
		cout << "The average rainfall over " << years << " year(s) is " << average << " inches." << endl;
		cout << "The total rainfall over " << years << " year(s) is " << total << " inches." << endl;
		cout << "These measurements are taken over " << months << " months." << endl;

	}
	else cout << "You cannot have an negative or nonzero number of years. Program termination." << endl;
	return 0;
	
}
/*
This program will calculate the number of months of rainfall,
the average rainfall, and total rainfall for a period of N years.
Please enter the number of years you wish to analyze.
2
Please enter the amount of rainfall in inches for year 1, month 1.
4
Please enter the amount of rainfall in inches for year 1, month 2.
5
Please enter the amount of rainfall in inches for year 1, month 3.
6
Please enter the amount of rainfall in inches for year 1, month 4.
4
Please enter the amount of rainfall in inches for year 1, month 5.
5
Please enter the amount of rainfall in inches for year 1, month 6.
6
Please enter the amount of rainfall in inches for year 1, month 7.
4
Please enter the amount of rainfall in inches for year 1, month 8.
5
Please enter the amount of rainfall in inches for year 1, month 9.
6
Please enter the amount of rainfall in inches for year 1, month 10.
4
Please enter the amount of rainfall in inches for year 1, month 11.
5
Please enter the amount of rainfall in inches for year 1, month 12.
6
Please enter the amount of rainfall in inches for year 2, month 1.
4
Please enter the amount of rainfall in inches for year 2, month 2.
5
Please enter the amount of rainfall in inches for year 2, month 3.
6
Please enter the amount of rainfall in inches for year 2, month 4.
4
Please enter the amount of rainfall in inches for year 2, month 5.
5
Please enter the amount of rainfall in inches for year 2, month 6.
6
Please enter the amount of rainfall in inches for year 2, month 7.
4
Please enter the amount of rainfall in inches for year 2, month 8.
5
Please enter the amount of rainfall in inches for year 2, month 9.
6
Please enter the amount of rainfall in inches for year 2, month 10.
4
Please enter the amount of rainfall in inches for year 2, month 11.
5
Please enter the amount of rainfall in inches for year 2, month 12.
6
The average rainfall over 2 year(s) is 5 inches.
The total rainfall over 2 year(s) is 120 inches.
These measurements are taken over 24 months.
Press any key to continue . . .



This program will calculate the number of months of rainfall,
the average rainfall, and total rainfall for a period of N years.
Please enter the number of years you wish to analyze.
1
Please enter the amount of rainfall in inches for year 1, month 1.
4
Please enter the amount of rainfall in inches for year 1, month 2.
5
Please enter the amount of rainfall in inches for year 1, month 3.
6
Please enter the amount of rainfall in inches for year 1, month 4.
4
Please enter the amount of rainfall in inches for year 1, month 5.
5
Please enter the amount of rainfall in inches for year 1, month 6.
6
Please enter the amount of rainfall in inches for year 1, month 7.
-4
rainfall cannot be negative! Please input a valid number of inches of rainfall.
Please enter the amount of rainfall in inches for year 1, month 7.
-4
rainfall cannot be negative! Please input a valid number of inches of rainfall.
Please enter the amount of rainfall in inches for year 1, month 7.
4
Please enter the amount of rainfall in inches for year 1, month 8.
5
Please enter the amount of rainfall in inches for year 1, month 9.
6
Please enter the amount of rainfall in inches for year 1, month 10.
4
Please enter the amount of rainfall in inches for year 1, month 11.
5
Please enter the amount of rainfall in inches for year 1, month 12.
6
The average rainfall over 1 year(s) is 5 inches.
The total rainfall over 1 year(s) is 60 inches.
These measurements are taken over 12 months.
Press any key to continue . . .


This program will calculate the number of months of rainfall,
the average rainfall, and total rainfall for a period of N years.
Please enter the number of years you wish to analyze.
0
You cannot have an negative or nonzero number of years. Program termination.
Press any key to continue . . .

*/