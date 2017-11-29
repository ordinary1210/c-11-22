#include <iostream>
#include <cstdlib>
using namespace std;
void HW1_4()
{
	cout << "   *    \n";
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3 - i; j++)
			cout << " ";
		for (int k = 1; k <= 1; k++)
			cout << "*";
		for (int j = 1; j <= i*2-1; j++)
			cout << " ";
		for (int k = 1; k <= 1; k++)
			cout << "*";
		    cout << "\n";
			
	}




	for (int i = 1; i <=2; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << " ";
		for (int k = 1; k <= 1; k++)
			cout << "*";
		for (int k = 3; k <= 7 - 2 * i; k++)
			cout << " ";
		for (int k = 1; k <= 1; k++)
			cout << "*";
		
		    cout << "\n";
	  }
	cout << "   *    \n";


	system("pause");
	//return(0);
}