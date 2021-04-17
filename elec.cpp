/* Total price of the current electricty consumption*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	//Declaration
	double dCurrent, dPrevious, dPrPerKWh, dTotalPr;
	//Entry of values
	cout << "Specify the current and previous meter value in KWh: ";
	cin >> dCurrent >> dPrevious;
	cout << "Specify price per KWh: ";
	cin >> dPrPerKWh;
	//Calculation
	dTotalPr = dCurrent * dPrPerKWh;
	//Output
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << "Current consumption: #" << dTotalPr << endl;
	
}
