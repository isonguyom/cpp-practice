#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main ()
{
	int iRoll=0, iNoOfRolls=0;
	srand(time(0));
	while (iRoll != 6)
	{
		iRoll =rand()%6+1;
		iNoOfRolls++;
	}
	cout << iNoOfRolls;
}
