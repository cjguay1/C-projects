/*********************************************************
* file name:Guay5_16
* programmer name: Chris Guay
* date created: 10/06/17
* date of last revision: 10/06/17
* details of the revision: none
* short description:  Calculating balance of savings account
**********************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Program description 
	cout << "This program will calculate and display" << endl
		<< "the balance of a savings account at the end of a year\n\n";
	// Declaring the variables: types and names 
	int iA;

	double deposit;
	double withdrawal;
	double interest;
	double total;
	double monthlyInterest;
	double totalWithdrawal;
	double depositTotal = 0;
	int months;
	double newBalance;
	double interestRate;
	
	// depositTotal = 0;
	totalWithdrawal = 0;

	// Variable initialization: getting the input from the user
	cout << "Enter the number of months since the account was opened: " << endl;
	cin >> months;


	if (months <= 0)
	{
		cout << "Invalid entry! The number of months must be positive and non-negative. Program termination." << endl;
		return 0;
	}
	else
		cout << "Please enter your starting balance." << endl;
	cin >> total;
	if (total < 0)
	{
		cout << "You cannot have a negative starting balance. Program termination." << endl;
		return 0;
	}
	cout << "Enter the annual interest rate as a decimal (as a note, 12% = 0.12)." << endl;
	cin >> interest;
	
	monthlyInterest = interest / 12;
	
		for (iA = 1; iA <= months; iA++)
		{
			cout << "Please enter the amount deposited in month " << iA << "." << endl;
			cin >> deposit;
			if (deposit < 0)
			{
				cout << "Your deposit cannot be a negative number! Please enter a valid deposit." << endl;
				iA--;
			}
			else
			{
				
				cout << "Please enter the amount withdrawn." << endl;
				cin >> withdrawal;
				if (withdrawal < 0)
				{
					cout << "Your withdrawal cannot be a negative number! Please enter valid numbers this time around." << endl;
					iA--;
				}
				else
				{
					// Calculations part 1
					total += deposit;
					depositTotal += deposit;
					total -= +withdrawal;
					totalWithdrawal += withdrawal;
					total = (total * (monthlyInterest)) + total;
				}
			}
		}

	// Calculations part 2

	if (total < 0)
	{
		cout << "Account Closed" << endl;
		return 0;
	}
	interestRate = total * monthlyInterest;
	newBalance = (monthlyInterest * total) + total;
	// Display the results 
	cout << fixed << setprecision(2) << "Your ending balance is: " << total << endl;
	cout << "Your Total deposit is:" << depositTotal << endl;
	cout << "Your Total withdrawn is: " << totalWithdrawal << endl;
	cout << "Your Total interest earned is: " << interestRate << endl;
	return 0;
}
/*
Write a program that calculates the balance of a savings account at the end of a period
of time. It should ask the user for the annual interest rate, the starting balance, and the
number of months that have passed since the account was established. A loop should
then iterate once for every month, performing the following:

A) Ask the user for the amount deposited into the account during the month. (Do not
accept negative numbers.) This amount should be added to the balance.

B) Ask the user for the amount withdrawn from the account during the month. (Do
not accept negative numbers.) This amount should be subtracted from the balance.

C) Calculate the monthly interest. The monthly interest rate is the annual interest rate
divided by twelve. Multiply the monthly interest rate by the balance, and add the
result to the balance.

After the last iteration, the program should display the ending balance, the total
amount of deposits, the total amount of withdrawals, and the total interest earned.
*/

/*
This program will calculate and display
the balance of a savings account at the end of a year

Enter the number of months since the account was opened:
0
Invalid entry! The number of months must be positive and non-negative. Program termination.
Press any key to continue . . .

This program will calculate and display
the balance of a savings account at the end of a year

Enter the number of months since the account was opened:
2
Please enter your starting balance.
-1
You cannot have a negative starting balance. Program termination.
Press any key to continue . . .

This program will calculate and display
the balance of a savings account at the end of a year

Enter the number of months since the account was opened:
2
Please enter your starting balance.
50
Enter the annual interest rate as a decimal (as a note, 12% = 0.12).
0.12
Please enter the amount deposited in month 1.
-1
Your deposit cannot be a negative number! Please enter a valid deposit.
Please enter the amount deposited in month 1.
20
Please enter the amount withdrawn.
-1
Your withdrawal cannot be a negative number! Please enter valid numbers this time around.
Please enter the amount deposited in month 1.
30
Please enter the amount withdrawn.
20
Please enter the amount deposited in month 2.
30
Please enter the amount withdrawn.
20
Your ending balance is: 71.31
Your Total deposit is:60.00
Your Total withdrawn is: 40.00
Your Total interest earned is: 0.71
Press any key to continue . . .


This program will calculate and display
the balance of a savings account at the end of a year

Enter the number of months since the account was opened:
2
Please enter your starting balance.
50
Enter the annual interest rate as a decimal (as a note, 12% = 0.12).
0.12
Please enter the amount deposited in month 1.
30
Please enter the amount withdrawn.
20
Please enter the amount deposited in month 2.
30
Please enter the amount withdrawn.
20
Your ending balance is: 71.31
Your Total deposit is:60.00
Your Total withdrawn is: 40.00
Your Total interest earned is: 0.71
Press any key to continue . . .



*/