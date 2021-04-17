#include <math.h>
#include <iostream>
using namespace std;
main ()
{
	double dNo;
	while (1==1)
	{
		cout << "Enter a number ";
		cin >> dNo;
		if (dNo<=0)
		break;
		cout << "The square root of the number is " << sqrt (dNo) << endl;
	}
}
