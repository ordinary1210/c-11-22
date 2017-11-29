#include <iostream>
#include <cstdlib>
using namespace std;
void HW1_2()
{
	cout << "      *      \n";
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6 - i; j++)
			cout << " ";
		for (int k = 1; k <= i; k++)
			cout << "*";
			cout << " ";
	    for (int k = 1; k <= i; k++)
				cout << "*";
		
		cout << "\n";
	}


	system("pause");
	//return(0);
}
