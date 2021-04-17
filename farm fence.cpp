/* Find the total length of all board to be bought for a wooden fence */
#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
	//Declaration
	int iPrPerMeter;
	const int cWOfboard = 10;
	const double dWastePerc = 0.1;
	double dLOfField, dWOfField, dWOfSpace, dHeight, dTotalL, dNoOfBoards, dNTotalL, dNTotalLM, dTotalPr;
	//Entry of measured and decided values
	cout << "Enter length and width of field: ";
	cin >> dLOfField >> dWOfField;
	cout << "Specify heigth of fence: ";
	cin >> dHeight;
	cout << "Specify width of space between each board: ";
	cin >> dWOfSpace;
	cout << "Specify price per meter: ";
	cin >> iPrPerMeter;
	//Calculations: 1. Number of boards to cover the height
	dNoOfBoards = (dHeight+dWOfSpace)/(cWOfboard+dWOfSpace);
	//2. Total length of all boards required to be bought
	dTotalL = 2*dNoOfBoards*(dLOfField+dWOfField);
	//3. Considering amount of board waste of 10%
	dNTotalL = dTotalL + (dWastePerc * dTotalL);
	//4. Converting total length required from cm to m
	dNTotalLM = dNTotalL / 100;
	//5. Total price of all boards required
	dTotalPr = dNTotalLM * iPrPerMeter;
	//Output
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << "Total length required:                            " << setw(8) << dTotalL << "cm" << endl;
	cout << "Total length requred considering 10% board waste: " << setw(8) << dNTotalL << "cm" << endl;
	cout << "Total  price of all boards:                       " << setw(8) << dTotalPr << "Naira" << endl;
}
