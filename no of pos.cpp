#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int iNo;
	double dPrice, dTotal;
	cout << "Number of units: " << setw(5) << iNo << endl;
	cout << setiosflags (ios::fixed) << setprecision(2);
	cout << "Price per unit:  " << setw(8) << dPrice << endl;
	cout << "Total price:     " << setw(8) << dTotal;
}
