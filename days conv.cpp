#include <iostream>
using namespace std;
main ()
{
	//Declaration
	int iNoOfDays, iDaysLeft, iNoOfMonths, iMonthsLeft, iNoOfYears;
	//Entry of numbers of days
	cout << "Specify no. of days: ";
	cin >> iNoOfDays;
	//Number of months
	iNoOfMonths = iNoOfDays / 30;
	//Days left
	iDaysLeft = iNoOfDays % 30;
	//Number of years
	iNoOfYears = iNoOfMonths / 12;
	//Numbers of months left
	iMonthsLeft = iNoOfMonths % 12;
	//Output
	cout << "No of years:  " << iNoOfYears << endl;
	cout << "No of months: " << iMonthsLeft << endl;
	cout << "No of days:   " << iDaysLeft << endl;
}
