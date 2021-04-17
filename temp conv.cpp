#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
	//Declaration
	double dTempC, dTempF;
	//Entry of tenperature in celcius
	cout << "Temperature in celcius: ";
	cin >> dTempC;
	//Calculation
	dTempF = 1.8 * dTempC + 32;
	//Output
	cout  << setprecision(2) << setiosflags(ios::fixed);
	cout << "Temperature in Fahrenheit: " << dTempF << endl;
}
