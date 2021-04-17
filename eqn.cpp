#include <iostream>
using namespace std;
main()
{
	int iNo=0, iRoot=1, LP;
	while ((iNo<2) && (iRoot<=100))
	{
		LP = iRoot * iRoot - 6 * iRoot + 8;
		if (LP==0)
		{
			iNo++;
			cout << iRoot << endl;
		}
		iRoot++;
	}
}
