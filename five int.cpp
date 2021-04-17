/*Five Integers*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	//Declaration
	int iNo1, iNo2, iNo3, iNo4, iNo5, iSum;
	double dAverage, dSumOfSq, dSumOfCube;
	//Entry of the five numbers
	cout << "Enter five no: ";
	cin >> iNo1 >>iNo2 >> iNo3 >> iNo4 >> iNo5;
	//Calculations: First the sum of the integers
	iSum = iNo1 + iNo2 + iNo3 + iNo4 + iNo5;
	//then the average
	dAverage = iSum / 5;
	//and then the sum of the squared numbers
	dSumOfSq = ((iNo1*iNo1)+(iNo2*iNo2)+(iNo3*iNo3)+(iNo4*iNo4)+(iNo5*iNo5));
	//finally the sum of the cube of the numbers
	dSumOfCube = ((iNo1*iNo1*iNo1)+(iNo2*iNo2*iNo2)+(iNo3*iNo3*iNo3)+(iNo4*iNo4*iNo4)+(iNo5*iNo5*iNo5));
	//Output
	cout << "ANSWERS" << endl;
	cout << "=======" << endl;
	cout << "Sum of the integers:                " << setw(4) << iSum << endl;
	cout << setprecision(3) << setiosflags(ios::fixed);
	cout << "Average:                            " << setw(8) << dAverage << endl;
	cout << "The sum of the squared no:          " << setw(8) << dSumOfSq << endl;
	cout << "The sum of the cube of the numbers: " << setw(8) << dSumOfCube << endl;
}
