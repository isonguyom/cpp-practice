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
	if (dGross > dLimit)
		dDisc = 10;
		else
		dDisc = 0;
	dNet = (100 - dDisc) * dGross / 100;
	cout << "Total price: " << dNet;
}
