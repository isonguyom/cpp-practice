#include <iostream>
using namespace std;
main()
{
	int i, j;
	cout << "Calculation of product" << endl;
	for (i=1; i<=36; i++)
	{
		for (j=1; j<=36; j++)
		{
			if (i*j == 36)
			cout << i << "and" << j << endl;
		}
	}
}
