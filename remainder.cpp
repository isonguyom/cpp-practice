#include <iostream>
using namespace std;
main ()
{
	//Declaration
	int iNo, iQuot, iRmaind;
	//Entry of number
	cout << "Enter no: ";
	cin >> iNo;
	//Calculations: First dividing the number
	iQuot = iNo/3;
	//finding the remainder
	iRmaind = iNo%3;
	//Output
	cout << "Result: " << iQuot << " and remainder " << iRmaind << endl;
}
