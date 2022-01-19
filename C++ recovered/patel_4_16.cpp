/*********************************************************
* file name: average.cpp
* programmer name: Ruchiben Patel
* date created: 9/29/17
* date of last revision: 9/29/17
* details of the revision: none
* short description:  asking time and names of racesrs 
	and outputing who came first, second, third
**********************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Program description
	cout << "This program will ask for and display" << endl
		<< "the times and places of three runners\n\n";

	// Declaring the variables: types and names
	string name1, name2, name3;
	float time1, time2, time3;

	// Variable initialization: getting the input from the user
	cout << "Enter the first runner's name" << endl;		// names
	cin >> name1;
	cout << "Enter the second runner's name" << endl;
	cin >> name2;
	cout << "Enter the third runner's name" << endl;
	cin >> name3;
	cout << "Enter " << name1 << "'s time" << endl;		// times
	cin >> time1;
	cout << "Enter " << name2 << "'s time" << endl;
	cin >> time2;
	cout  << "Enter " << name3 << "'s time" << endl;
	cin >> time3;

	
	// Validity check
	if (time1 < 0 || time2 < 0 || time3 < 0)
	{
		cout << "Invalid time entered." << endl;
		return 0;
	}

	// Calculations and Display the results
	if (time1 < time2)				//	___t1 ___ t2 ___
	{
		if (time3 < time1)			//		t3, t1, t2
		{
			cout << name3 << " came in first place.\n";
			cout << name1 << " came in second place.\n";
			cout << name2 << " came in third place.\n";
		}
		else if (time3 < time2)		//		t1, t3, t2
		{
			cout << name1 << " came in first place.\n";
			cout << name3 << " came in second place.\n";
			cout << name2 << " came in third place.\n";
		}
		else						//		t1, t2, t3
		{
			cout << name1 << " came in first place.\n";
			cout << name2 << " came in second place.\n";
			cout << name3 << " came in third place.\n";
		}
	}
	else // (time1 > time2)			// ____t2 ___ t1 ___
	{
		if (time3 < time2)			//		t3, t2, t1
		{
			cout << name3 << " came in first place.\n";
			cout << name2 << " came in second place.\n";
			cout << name1 << " came in third place.\n";
		}
		else if (time3 < time1)		//		t2, t3, t1
		{
			cout << name2 << " came in first place.\n";
			cout << name3 << " came in second place.\n";
			cout << name1 << " came in third place.\n";
		}
		else						//		t2, t1, t3
		{
			cout << name2 << " came in first place.\n";
			cout << name1 << " came in second place.\n";
			cout << name3 << " came in third place.\n";
		}
	}
	
	return 0;
}

/*
This program will ask for and display
the times and places of three runners

Enter the first runner's name
a
Enter the second runner's name
b
Enter the third runner's name
c
Enter a's time
1
Enter b's time
5
Enter c's time
10
a came in first place.
b came in second place.
c came in third place.
Press any key to continue . . .




This program will ask for and display
the times and places of three runners

Enter the first runner's name
a
Enter the second runner's name
b
Enter the third runner's name
c
Enter a's time
1
Enter b's time
10
Enter c's time
5
a came in first place.
c came in second place.
b came in third place.
Press any key to continue . . .





This program will ask for and display
the times and places of three runners

Enter the first runner's name
a
Enter the second runner's name
b
Enter the third runner's name
c
Enter a's time
100
Enter b's time
5
Enter c's time
1
c came in first place.
b came in second place.
a came in third place.
Press any key to continue . . .




This program will ask for and display
the times and places of three runners

Enter the first runner's name
a
Enter the second runner's name
b
Enter the third runner's name
c
Enter a's time
100
Enter b's time
1
Enter c's time
10
b came in first place.
c came in second place.
a came in third place.
Press any key to continue . . .





This program will ask for and display
the times and places of three runners

Enter the first runner's name
abe
Enter the second runner's name
ben
Enter the third runner's name
champ
Enter abe's time
10
Enter ben's time
1
Enter champ's time
100
ben came in first place.
abe came in second place.
champ came in third place.
Press any key to continue . . .




This program will ask for and display
the times and places of three runners

Enter the first runner's name
abe
Enter the second runner's name
bob
Enter the third runner's name
sam
Enter abe's time
10
Enter bob's time
100
Enter sam's time
1
sam came in first place.
abe came in second place.
bob came in third place.
Press any key to continue . . .


This program will ask for and display			//invalid entry test
the times and places of three runners

Enter the first runner's name
abe
Enter the second runner's name
bob
Enter the third runner's name
chad
Enter abe's time
-5
Enter bob's time
16
Enter chad's time
10
Invalid time entered.
Press any key to continue . . .





This program will ask for and display			//test with decimals
the times and places of three runners

Enter the first runner's name
bab
Enter the second runner's name
ham
Enter the third runner's name
lob
Enter bab's time
1.2
Enter ham's time
5
Enter lob's time
6
bab came in first place.
ham came in second place.
lob came in third place.
Press any key to continue . . .
*/
