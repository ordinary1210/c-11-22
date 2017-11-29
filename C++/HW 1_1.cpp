#include <iostream>
#include <cstdlib>
using namespace std;
void HW1_1()
{
    for (int i = 1; i <= 7; i++) 
	{
		for (int j = 1; j <= 7 - i; j++)
		   cout << " ";
		for (int k = 1; k <= 2 * i - 1; k++) 
		   cout << "*";
		   cout << "\n";
	}


	system("pause");
	//return(0);
}
