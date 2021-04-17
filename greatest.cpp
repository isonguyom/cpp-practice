#include <iostream>
using namespace std;
main ()
{
	int iNo1, iNo2, iNo3, iGreatest;
	cout << "Enter 3 numbers: ";
	cin >> iNo1 >> iNo2 >> iNo3;
	if (iNo1>=iNo2 && iNo1>=iNo3)
	iGreatest = iNo1;
	else if (iNo2>=iNo1 && iNo2>=iNo3)
	iGreatest = iNo2;
	else
	iGreatest = iNo3;
	cout << "The greatest number is " << iGreatest;
}
