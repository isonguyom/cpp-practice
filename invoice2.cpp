/* invoice program */
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	//Declarations
	int iNo;
	double dUnitPr, dPriceExTax, dCustPrice, dTax, dTaxPerc, dDiscAmt, dPriceAfDisc;
	const double  dDiscPerc = 0.1;
	//Entry of quantity and unit price
	cout<< "Specify quantity and unit price: ";
	cin >> iNo >> dUnitPr;
	cout << "Specify tax percent: ";
	cin >> dTaxPerc;
	//Calculations. First the price without tax
	dPriceExTax = dUnitPr * iNo;
	// then  the discount amount
	dDiscAmt = dPriceExTax * dDiscPerc;
	//deduct the discount amount
	dPriceAfDisc = dPriceExTax - dDiscAmt;
	//then the tax amount
	dTax = dPriceAfDisc * dTaxPerc/100;	
	//and  the customer price
	dCustPrice = dPriceExTax + dTax;
	//Output
	cout << endl << "INVOICE";
	cout << endl << "=======" << endl;
	cout << "Quantity:          " << setw(5) << iNo << endl;
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << "Price per unit:    " << setw(8) << dUnitPr << endl;
	cout << "Total price:       " << setw(8) << dCustPrice << endl;
	cout << "Tax:               " << setw(8) << dTax << endl;
	cout << "Price without tax: " << setw(8) << dPriceExTax << endl;
	cout << "Discount amount:   " << setw(8) << dDiscAmt << endl;
}
