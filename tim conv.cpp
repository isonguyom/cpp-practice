#include <iostream>
using namespace std;
main ()
{
	//Declaration
	int iNoOfSec, iSecLeft, iNoOfMin, iMinLeft, iNoOfHours;
	//Entry of no. of seconds to be converted
	cout << "Specify no. of seconds: ";
	cin >> iNoOfSec;
	//Number of entire minutes:
	iNoOfMin = iNoOfSec / 60;
	//Number of seconds left:
	iSecLeft = iNoOfSec % 60;
	// iNoOfMin is now the origin of the hours calculation:
	iNoOfHours = iNoOfMin / 60;
	//and no. of minutes left:
	iMinLeft = iNoOfMin % 60;
	//Output
	cout << "number of hours    =" << iNoOfHours << endl;
	cout << "Number of minutes  =" << iMinLeft << endl;
	cout << "Number of seconds  =" << iSecLeft << endl;
}
