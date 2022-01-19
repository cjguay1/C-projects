/*********************************************************
* file name: Stock calculation
* programmer name: Christopher Guay
* date created: 9/15/17
* date of last revision: 9/15/17
* details of the revision: none
* short description:  calculating price of stocks, selling price, commission price (buy and sell), 
**********************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Program description
	cout << "This program will calculate and display the amount of income" << endl
		<< "generated from ticket sales, given number of tickets sold" << endl
		<< "for each type of seat" << endl;

	// Declaring the variables: types and names
	int sharesBought;                  // the amount of shares bought originally, as an integer value
	int sharesSold;                    // the amount of shares sold, after purchasing them
	double shareBuyPrice;              // the buying price for each share
	double shareSellPrice;             // the selling price for each share
	double commissionBonus;            // the percent of the sale of stocks that the commission demands as payment
	double stockBuyPrice;              // the cost of buying a number of stocks; calculated from sharesBought and shareBuyPrice
	double stockSellPrice;             // the amount gained from selling stocks; calculated from sharesSold and shareSellPrice
	double commissionBuyPrice;         // the amount demanded as commission for buying stocks
	double commissionSellPrice;        // the amount demanded as commission for seling stocks
	double profit;                     // the amount difference between cost of buying stocks and amount gained from selling them (can be negative)
	
	// Variable initialization: getting the input from the user

	cout << "How many shares were bought?" << endl;
	cin >> sharesBought;
	
	cout << "How much did each share cost to buy?" << endl;
	cin >> shareBuyPrice;
	
	cout << "what percentage of the price did the broker recieve as commission?" << endl;
	cin >> commissionBonus;
	
	cout << "How many shares were sold?" << endl;
	cin >> sharesSold;
	
	cout << "How much was each share sold for?" << endl;
	cin >> shareSellPrice;


	// Calculations
	
	stockBuyPrice = ((sharesBought*shareBuyPrice)*commissionBonus) + (sharesBought*shareBuyPrice);
	
	stockSellPrice = (sharesSold*shareSellPrice);
	
	commissionBuyPrice = ((sharesBought*shareBuyPrice)*commissionBonus);
	
	commissionSellPrice = (sharesSold*shareSellPrice)*commissionBonus;
	
	profit = stockSellPrice - (stockBuyPrice + commissionSellPrice);
	
	// Display the results
	cout << fixed << setprecision(2) << "The cost of purchasing the stocks is " << stockBuyPrice << endl;
	
	cout << "The cost due to commission upon purchasing stocks is " << commissionBuyPrice << endl;
	
	cout << "The amount the stocks were sold for is " << stockSellPrice << endl;
	
	cout << "The cost due to commmission upon selling stocks is " << commissionSellPrice << endl;
	
	cout << "The profit made after paying both commissions and selling stocks after buying is your profit: " << profit << endl;
	
	return 0;

/*
This program will calculate and display the amount of income
generated from ticket sales, given number of tickets sold
for each type of seat
How many shares were bought?
1000
How much did each share cost to buy?
45.50
what percentage of the price did the broker recieve as commission?
0.02
How many shares were sold?
1000
How much was each share sold for?
56.90
The cost of purchasing the stocks is 46410.00
The cost due to commission upon purchasing stocks is 910.00
The amount the stocks were sold for is 56900.00
The cost due to commmission upon selling stocks is 1138.00
The profit made after paying both commissions and selling stocks after buying is your profit: 9352.00
Press any key to continue . . .

*/
}