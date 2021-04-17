#include <iostream>
using namespace std;
main ()
{
	int iAge;
	cout << "Enter age: ";
	cin >> iAge;
	if (iAge < 15)
	cout << "You'll got to stick to the bike some more time";
	else
	cout << "You are allowed to drive moped";
	if (iAge>18)
	cout << endl << "Issue driving liecence";
	else
	cout << endl << "No driving liecence";
}
