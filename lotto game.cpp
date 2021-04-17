/* Lotto Game */
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
main ()
{
	//Declaration
	int iNo1, iNo2, iNo3, iNo4, iNo5, iNo6, iNo7;
	const int iNo = 7;
	//Initial random generator
	srand(time(0));
	//Generating the seven numbers
	iNo1 = rand() %34+1;
	iNo2 = rand() %34+1;
	iNo3 = rand() %34+1;
	iNo4 = rand() %34+1;
	iNo5 = rand() %34+1;
	iNo6 = rand() %34+1;
	iNo7 = rand() %34+1;
	//Ouput
	cout << "Number of numbers generated: " << iNo << endl;
	cout << setprecision(1) << setiosflags(ios::fixed);
	cout << "1st number: " << iNo1 << endl;
	cout << "2nd number: " << iNo2 << endl;
	cout << "3rd number: " << iNo3 << endl;
	cout << "4th number: " << iNo4 << endl;
	cout << "5th number: " << iNo5 << endl;
	cout << "6th number: " << iNo6 << endl;
	cout << "7th number: " << iNo7 << endl;
}
