#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main ()
{
	int iNo;
	srand(time(0));
	for (int i=1; i<=13; i++)
	{
		iNo = rand()%3;
		switch (iNo)
		{
			case 0:
				cout << "1" << endl;
				break;
			case 1:
				cout << "  X" << endl;
				break;
			case 2:
				cout << "     2" << endl;
				break;
		}
	}
}
