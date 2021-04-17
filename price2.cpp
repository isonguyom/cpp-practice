#include <iostream>
using namespace std;
main ()
{
	const double dLimit = 500;
	int iNo;
	double dUnitPrice, dGross, dNet, dDisc;
	cout << "Specify quantity and unit price: ";
	cin >> iNo >> dUnitPrice;
	dGross = iNo * dUnitPrice;
	if (iNo>100)
		dDisc = 20;
	else if (iNo>50)
		dDisc = 10;
	else
		dDisc = 0;
		cout << "No discount" << endl;
}
