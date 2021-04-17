/* Conversion of Swedish Ore */
#include <iostream>
using namespace std;
main ()
{
	//Declaration
	int iNoOfOre, iOreLeft, i50Ore, i50OreLeft, iCrowns, iCrownsLeft;
	int i5Crowns, i5CrownsLeft, i10Crowns, i10CrownsLeft, i20Crowns;
	int i20CrownsLeft, i50Crowns, i50CrownsLeft, i100Crowns;
	//Entry of number of Swedish Ore
	cout << "Enter no. of Swedish Ore: ";
	cin >> iNoOfOre;
	//Calculations: 1. Number of 50-ore coins and number of ore left
	i50Ore = iNoOfOre / 50;
	iOreLeft = iNoOfOre % 50;
	//2. Number of crowns and number of 50-ore coins left
	iCrowns = i50Ore / 2;
	i50OreLeft = i50Ore % 2;
	//3. Number of 5-crowns and number of crowns left
	i5Crowns = iCrowns / 5;
	iCrownsLeft = iCrowns % 5;
	//4. Number of 10-crowns and number of 5-crowns left
	i10Crowns = i5Crowns / 2;
	i5CrownsLeft = i5Crowns % 2;
	//5. Number of 20-crowns notes and number of 10-crowns left
	i20Crowns = i10Crowns / 2;
	i10CrownsLeft = i10Crowns % 2;
	//6. Number of 50-crowns notes and number of 20-crowns notes left
	i50Crowns = i20Crowns / (5/2);
	i20CrownsLeft = i20Crowns % (5/2);
	//7. Number of 100-crowns notes and number of 50-crowns notes left
	i100Crowns = i50Crowns / 2;
	i50CrownsLeft = i50Crowns % 2;
	//Output
	cout << "No. of 50-ore:           " << i50Ore << endl;
	cout << "No. of crowns:           " << iCrowns << endl;
	cout << "No. of 5-crowns:         " << i5Crowns << endl;
	cout << "No. of 10-crowns:        " << i10Crowns << endl;
	cout << "No. of 20-crowns notes:  " << i20Crowns << endl;
	cout << "No. of 50-crowns notes:  " << i50Crowns << endl;
	cout << "No. of 100-crowns notes: " << i100Crowns << endl;
}
