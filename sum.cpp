#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	// Declaration
	int iNo1, iNo2, iSum, iDiff, iProd;
	double iQuot;
	// Entry of numbers
	cout << "First no: ";
	cin >> iNo1;
	cout << "Second no: ";
	cin >> iNo2;
	// Calculation of numbers
	iSum = iNo1 + iNo2;
	iDiff = iNo1 - iNo2;
	iProd = iNo1 * iNo2;
	iQuot = iNo1 / iNo2;
	// Output
	cout << "Sum:        " << iSum << endl;
	cout << "Difference: " << iDiff << endl;
	cout << "Product:    " << iProd << endl;
	cout << "Quotent:    " << .iQuot << endl;
	cout << setiosflags(ios::fixed) << setprecision(2);
}
