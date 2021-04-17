/* Random Temperature */
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
main ()
{
	//Declaration
	double dTemp1, dTemp2, dTemp3, dTemp4, dTemp5;
	const int iNo = 5;
	//Initial random generator
	srand(time(0));
	//Generating five temperature
	dTemp1 = rand() %23+0.5;
	dTemp2 = rand() %23+0.5;
	dTemp3 = rand() %23+0.5;
	dTemp4 = rand() %23+0.5;
	dTemp5 = rand() %23+0.5;
	//Output
	cout << "Number of temperature: " << iNo << endl;
	cout << setprecision(1) << setiosflags(ios::fixed);
	cout << "Temperature 1: " << dTemp1 << endl;
	cout << "Temperature 2: " << dTemp2 << endl;
	cout << "Temperature 3: " << dTemp3 << endl;
	cout << "Temperature 4: " << dTemp4 << endl;
	cout << "Temperature 5: " << dTemp5 << endl;
}
