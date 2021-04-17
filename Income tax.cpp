#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	double dIncome, dTaxPerc1, dTaxPerc2, dTaxPerc, dTax1, dTax2, dTotalTax;
	cout << "Enter income: ";
	cin >> dIncome;
	if (dIncome < 10000)
	{dTaxPerc = 0;
	dTotalTax = 0;
	}
	else if (dIncome < 50000)
	{dTaxPerc = 50;
	dTotalTax = ((dTaxPerc/100) * dIncome) - 5000;
	
	}
	else if (dIncome <= 100000)
	{
	dTaxPerc = 50;
	dTotalTax = (dTaxPerc/100) * dIncome;
	}
	else
	{
	dTaxPerc1 = 50;
	dTaxPerc2 = 50 + 20;
	dTax1 = (dTaxPerc1/100) * 100000;
	dTax2 = dTaxPerc2/100 * (dIncome - 100000);
	dTotalTax = dTax1 + dTax2;
	}
	cout << "Total tax is " << dTotalTax;
}
