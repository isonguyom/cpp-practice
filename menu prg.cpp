#include <stdlib.h>
#include <iostream>
using namespace std;
main ()
{
	int iOpt;
	double dNo1, dNo2;
	cout << "Enter 2 numbers: ";
	cin >> dNo1 >> dNo2;
	system ("cls");
	cout << "1. Greatest" << endl;
	cout << "2. Least" << endl;
	cout << "3. Average" << endl;
	cout << endl << "Select";
	cin >> iOpt;
	switch (iOpt)
	{
		case 1:
			if (dNo1>dNo2)
			cout << dNo1;
			else
			cout << dNo2;
			cout << "is the greatest";
			break;
		case 2:
			if (dNo1<dNo2)
			cout << dNo1;
			else
			cout << dNo2;
			cout << "is the least";
			break;
		case 3:
			cout << "the average is" << (dNo1+dNo2)/2;
			break;
			default:
			cout << "Wrong choice";
			break;
	}
}
