#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	// Declaration
	int iNo;
	double dDec1, dDec2, dDec3;
	// Output
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "First decimal:  " << setw(8) << dDec1 << endl;
	cout << "Second decimal: " << setw(8) << dDec2 << endl;
	cout << "Third decimal:  " << setw(8) << dDec3 << endl;
}
