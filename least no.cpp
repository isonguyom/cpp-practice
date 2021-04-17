#include <iostream>
using namespace std;
main ()
{
	int iNo1, iNo2, iLeast;
	cout << "Enter 1st number: ";
	cin >> iNo1;
	cout << "Enter 2nd number: ";
	cin >> iNo2;
	if (iNo1 < iNo2)
	iLeast = iNo1;
	else
	iLeast = iNo2;
	cout << "The least number is " << iLeast;
}
