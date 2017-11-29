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
		cout << " 1.第一個 C++ 程式,使用命名空間 std 範例" << endl;
		cout << " 2.第一個 C++ 程式,不使用命名空間 std 範例" << endl;
		cout << " 3.bool 型別與 C++ 的關鍵字 範例" << endl;
		cout << " 4.cout 格式化: 輸入寬度(Output Width)" << endl;
		cout << " 5.cout 格式化: 對齊方式(Alignment)" << endl;
		cout << " 6.cout 格式化: 精準度(Precision)" << endl;
		cout << " 7. cin 輸入" << endl;
		cout << "---------------------------H W---------------------------" << endl;
		cout << " 8.以 cout 搭配輸出輸出控制器，在螢幕上顯示以下的四個圖形(a)。" << endl;
		cout << " 9.以 cout 搭配輸出輸出控制器，在螢幕上顯示以下的四個圖形(b)。" << endl;
		cout << "10.以 cout 搭配輸出輸出控制器，在螢幕上顯示以下的四個圖形(c)。" << endl;
		cout << "11.以 cout 搭配輸出輸出控制器，在螢幕上顯示以下的四個圖形(d)。" << endl;

		cout << "--------------------------------------------------" << endl;
		cout << "請輸入要執行的範例(或'0'結束程式執行!?) :";
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
			 cout << "輸入的數字不在範圍內!!!" << endl;
			 system("pause");
			 break;

		}
	} while (input != 0);
}