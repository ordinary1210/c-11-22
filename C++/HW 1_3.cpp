#include <iostream>
#include <cstdlib>
using namespace std;
void HW1_3()
{
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4 - i; j++)
			cout << " ";
		for (int k = 1; k <= 2 * i - 1; k++)
			cout << "*";
	
	  cout << "\n";
    }

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <=i; j++)
			cout << " ";
		for (int k = 1; k <=7-2*i; k++)
			cout << "*";

		cout << "\n";
	}
	


	system("pause");
	//return(0);
}