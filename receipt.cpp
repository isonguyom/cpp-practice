/* Receipt program */
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	//Declaration
	double dGasQty, dPrPerLtr, dAmtToBePaid;
	//Entry of gas quantity and price per litre
	cout << "Specify gas quantity and price per litre: ";
	cin >> dGasQty >> dPrPerLtr;
	//Calculation
	dAmtToBePaid = dGasQty * dPrPerLtr;
	//output
	cout << "        RECEIPT        " << endl;
	cout << "        =======        " << endl;
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << "Volume:      " << dGasQty << " l" << endl;
	cout << "Litre price: " << dPrPerLtr << " #/l" << endl;
	cout << "-----------" << endl;
	cout << "To be paid:  " << dAmtToBePaid << " #" << endl;
}
