#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
main ()
{

//Declaratioin
int iRoll1, iRoll2, iRoll3, iRoll4, iRoll5;
double dAverage;
const int iNo = 5;
//Initial random number generator
srand(time(0));
// Roll 5 times
iRoll1 = rand() %6+1 + rand() %6+1;
iRoll2 = rand() %6+1 + rand() %6+1;
iRoll3 = rand() %6+1 + rand() %6+1;
iRoll4 = rand() %6+1 + rand() %6+1;
iRoll5 = rand() %6+1 + rand() %6+1;
//Calculate average
dAverage = (double) (iRoll1 + iRoll2 + iRoll3 + iRoll4 + iRoll5) / iNo;
//Output
cout << "Number of rolls: " << iNo << endl;
cout << setprecision(1) << setiosflags(ios::fixed);
cout << "Roll 1: " << iRoll1 << endl;
cout << "Roll 2: " << iRoll2 << endl;
cout << "Roll 3: " << iRoll3 << endl;
cout << "Roll 4: " << iRoll4 << endl;
cout << "Roll 5: " << iRoll5 << endl;
cout << "Average score: " << dAverage;
}
