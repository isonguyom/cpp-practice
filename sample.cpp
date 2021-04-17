#include <iostream>
using namespace std;
main()
{
	int iNo;
	double dblPrice, dblTotal;
	cout << "Enter price per unit ";
	cin >> dblPrice;
	cout << "Enter quantity ";
	cin >> iNo;
	dblTotal = dblPrice * iNo;
	cout << "The total price is " <<dblTotal<< endl;
}
