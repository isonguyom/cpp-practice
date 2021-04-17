#include <iostream>
using namespace std;
main ()
{
	int i, iLimit, iSum = 0;
	cout << "Enter limit: ";
	cin >> iLimit;
	for (i=1; i<=iLimit; i++)
		iSum += i;
	cout << "The sum = " << iSum << endl;
}
