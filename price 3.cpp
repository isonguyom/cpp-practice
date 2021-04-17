#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	int iNo, iOpt;
	double dUnitPr, dGross, dNet, dDisc, dTaxPerc, dTax, dCustPr;
	cout << "Specify quantity and unit price: ";
	cin >> iNo >> dUnitPr;
	dGross = iNo * dUnitPr;
	if (dGross<=250)
	dDisc = 0;
	else if (dGross > 250 && dGross <=500)
	{
	dDisc = 5;
	}
	else
	{
	dDisc = 10;
}
	dNet = (100 - dDisc) * dGross / 100;
	cout << "1. Food products" << endl;
	cout << "2. Other products" << endl;
	cout << endl << "Select";
	cin >> iOpt;
		if (iOpt == 1)
		{
		dTaxPerc = 12;
		dTax = (dTaxPerc/100)*dNet;
		dCustPr = dNet + dTax;
	}
		else if (iOpt == 2)
		{
		dTaxPerc = 25;
		dTax = (dTaxPerc/100)*dNet;
		dCustPr = dNet + dTax;
	    }
		else
		cout << "wrong choice" << endl;
		dTax = 0;
		dCustPr = dNet;
cout << endl << "Total price:          " << dNet << endl;
cout << "Final customer price: " << dCustPr;
}
