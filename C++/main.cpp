#include<iostream>
#include<cstdlib>

extern void ex1();
extern void ex2();
extern void ex3();
extern void ex4();
extern void ex5();
extern void ex6(); 
extern void ex7();
extern void HW1_1();
extern void HW1_2();
extern void HW1_3();
extern void HW1_4();
using namespace std;

int main(void)
{
	int input;
	do {
		system("cls");
		cout << " 1.�Ĥ@�� C++ �{��,�ϥΩR�W�Ŷ� std �d��" << endl;
		cout << " 2.�Ĥ@�� C++ �{��,���ϥΩR�W�Ŷ� std �d��" << endl;
		cout << " 3.bool ���O�P C++ ������r �d��" << endl;
		cout << " 4.cout �榡��: ��J�e��(Output Width)" << endl;
		cout << " 5.cout �榡��: ����覡(Alignment)" << endl;
		cout << " 6.cout �榡��: ��ǫ�(Precision)" << endl;
		cout << " 7. cin ��J" << endl;
		cout << "---------------------------H W---------------------------" << endl;
		cout << " 8.�H cout �f�t��X��X����A�b�ù��W��ܥH�U���|�ӹϧ�(a)�C" << endl;
		cout << " 9.�H cout �f�t��X��X����A�b�ù��W��ܥH�U���|�ӹϧ�(b)�C" << endl;
		cout << "10.�H cout �f�t��X��X����A�b�ù��W��ܥH�U���|�ӹϧ�(c)�C" << endl;
		cout << "11.�H cout �f�t��X��X����A�b�ù��W��ܥH�U���|�ӹϧ�(d)�C" << endl;

		cout << "--------------------------------------------------" << endl;
		cout << "�п�J�n���檺�d��(��'0'�����{������!?) :";
		cin >> input;

		while (getchar() != '\n')
			;

		switch (input) {
		 case 0:
		     break;
		 case 1:
			 ex1();
			 break;
		 case 2:
			 ex2();
			 break;
		 case 3:
			 ex3();
			 break;
		 case 4:
			 ex4();
			 break;
		 case 5:
			 ex5();
			 break;
		 case 6:
			 ex6();
			 break;
		 case 7:
			 ex7();
			 break;
		 case 8:
			 HW1_1();
			 break;
		 case 9:
			 HW1_2();
			 break;
		 case 10:
			 HW1_3();
			 break;
		 case 11:
			 HW1_4();
			 break;
		
		 
		 default:
			 cout << "��J���Ʀr���b�d��!!!" << endl;
			 system("pause");
			 break;

		}
	} while (input != 0);
}