#include <iostream>
using namespace std;
main ()
{
int iNo, iRmain;
cout << "Enter number: ";
cin >> iNo;
iRmain = iNo%2;
if (iRmain == 0)
cout << "Number is EVEN";
else
cout << "Number is ODD";
if (iNo % 3 == 0)
cout << endl << "Number is evenly divided by 3";
else
cout << endl << "Number not evenly divided by 3"; 
}
