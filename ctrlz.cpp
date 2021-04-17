#include <iostream>
using namespace std;
main ()
{
	int iSum=0, i=0, iNo;
	cout << "Enter a number: ";
	while (cin >> iNo)
	{
		iSum += iNo;
		i++;
		cout << "Enter one more number: ";
	}
	cout << endl << "Average = " << (double)iSum/i << endl;
}
