#include <iostream>
#include "FillRand.h"
#include "Print.h"
#include "Print.cpp" //При использовании шаблонов необходимо прописывать и .cpp
#include "Sort.h"
#include "Sort.cpp"
#include "Auxiliary.h"
//#include ""

using namespace std;
///**********************************************************************************************/
///**********************************************************************************************/
#define INTx1
#define DOUBLEx1
#define CHARx1
#define FLOATx1
#define INTx2
#define DOUBLEx2
#define CHARx2
#define FLOATx2
/**********************************************************************************************/

void main()
{
	setlocale(LC_ALL, "Russian");
	/////////////////////////
#ifdef INTx1
	G_INTx1:
	const int n = 5;
	int Min_Intx1;
	int Max_Intx1;	
	std::cout << "\t\tОдномерный масив типа int";
	W_line();
	std::cout << "Введите минимально допустимое значение элементов массива:";
	std::cin >> Min_Intx1;
	std::cout << "Введите максимально допустимое значение элементов массива:";	
	std::cin >> Max_Intx1;
	W_line();
	
	int Arr[n];
	FillRand(Arr, n, Min_Intx1, Max_Intx1);
	Print(Arr, n);
	W_line();
	Sort(Arr, n);
	Print(Arr, n);
	
	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto G_INTx1;
}

	system("cls");

#endif // INTx1
	////////////////////////

#ifdef DOUBLEx1
	
G_DOUBLEx1:
	const int m = 10;
	
	int Min_Doux1;
	int Max_Doux1;
	std::cout << "\t\tОдномерный масив типа double";
	W_line();
	std::cout << "Введите минимально допустимое значение элементов массива:";
	std::cin >> Min_Doux1;
	std::cout << "Введите максимально допустимое значение элементов массива:";
	std::cin >> Max_Doux1;
	W_line();

	double Brr[m];
	FillRand(Brr, m, Min_Doux1, Max_Doux1);
	Print(Brr, m);
	W_line();
	Sort(Brr, m);
	Print(Brr, m);

	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto G_DOUBLEx1;
	}

	system("cls");

#endif // DOUBLEx1
	////////////////////////

#ifdef CHARx1
	
G_CHARx1:
	const int z = 10;
	int Min_Cx1;
	int Max_Cx1;
	std::cout << "\t\tОдномерный масив типа char";
	W_line();
	std::cout << "Введите минимально допустимое значение элементов массива:";
	std::cin >> Min_Cx1;
	std::cout << "Введите максимально допустимое значение элементов массива:";
	std::cin >> Max_Cx1;
	W_line();

	char Crr[z];
	FillRand(Crr, z, Min_Cx1, Max_Cx1);
	Print(Crr, z);
	W_line();
	Sort(Crr, z);
	Print(Crr, z);

	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto G_CHARx1;
	}

	system("cls");
#endif // CHARx1
	////////////////////////
#ifdef FLOATx1

	G_FLOATx1:
			 const int y = 10;
			 int Min_Fx1;
			 int Max_Fx1;
			 std::cout << "\t\tОдномерный масив типа float";
			 W_line();
			 std::cout << "Введите минимально допустимое значение элементов массива:";
			 std::cin >> Min_Fx1;
			 std::cout << "Введите максимально допустимое значение элементов массива:";
			 std::cin >> Max_Fx1;
			 W_line();

			 float Frr[y];
			 FillRand(Frr, y, Min_Fx1, Max_Fx1);
			 Print(Frr, y);
			 W_line();
			 Sort(Frr, y);
			 Print(Frr, y);

			 std::cout << " Для повтора Нажмите 1: ";
			 if (_getch() == '1')
			 {
				 system("cls");
				 goto G_FLOATx1;
			 }

			 system("cls");
#endif // FLOATx1
	////////////////////////
#ifdef INTx2

G_INTx2:
	
	int Min_Intx2;
	int Max_Intx2;
	std::cout << "\t\tДвумерный масив типа int";
	W_line();
	std::cout << "Введите минимально допустимое значение элементов массива:";
	std::cin >> Min_Intx2;
	std::cout << "Введите максимально допустимое значение элементов массива:";
	std::cin >> Max_Intx2;
	W_line();

	int Drr[ROWS][COLS];
	FillRand(Drr, Min_Intx2, Max_Intx2);
	Print(Drr);
	W_line();
	Sort(Drr);
	Print(Drr);

	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto G_INTx2;
	}

	system("cls");
#endif // INTx2
	////////////////////////

#ifdef DOUBLEx2

	G_DOUBLEx2:

			int Min_Dx2;
			int Max_Dx2;
			std::cout << "\t\tДвумерный масив типа double";
			W_line();
			std::cout << "Введите минимально допустимое значение элементов массива:";
			std::cin >> Min_Dx2;
			std::cout << "Введите максимально допустимое значение элементов массива:";
			std::cin >> Max_Dx2;
			W_line();

			double Ddr[ROWS][COLS];
			FillRand(Ddr, Min_Dx2, Max_Dx2);
			Print(Ddr);
			W_line();
			Sort(Ddr);
			Print(Ddr);

			std::cout << " Для повтора Нажмите 1: ";
			if (_getch() == '1')
			{
				system("cls");
				goto G_DOUBLEx2;
			}

			system("cls");
#endif // DOUBLEx2
	////////////////////////

#ifdef CHARx2
	G_CHARx2:

			int Min_Cx2;
			int Max_Cx2;
			std::cout << "\t\tДвумерный масив типа char";
			W_line();
			std::cout << "Введите минимально допустимое значение элементов массива:";
			std::cin >> Min_Cx2;
			std::cout << "Введите максимально допустимое значение элементов массива:";
			std::cin >> Max_Cx2;
			W_line();

			char Dcr[ROWS][COLS];
			FillRand(Dcr, Min_Cx2, Max_Cx2);
			Print(Dcr);
			W_line();
			Sort(Dcr);
			Print(Dcr);

			std::cout << " Для повтора Нажмите 1: ";
			if (_getch() == '1')
			{
				system("cls");
				goto G_CHARx2;
			}

			system("cls");
#endif // CHARx2
	////////////////////////
#ifdef FLOATx2
			G_FLOATx2 :

					 int Min_Fx2;
					 int Max_Fx2;
					 std::cout << "\t\tДвумерный масив типа float";
					 W_line();
					 std::cout << "Введите минимально допустимое значение элементов массива:";
					 std::cin >> Min_Fx2;
					 std::cout << "Введите максимально допустимое значение элементов массива:";
					 std::cin >> Max_Fx2;
					 W_line();

					 float Dfr[ROWS][COLS];
					 FillRand(Dfr, Min_Fx2, Max_Fx2);
					 Print(Dfr);
					 W_line();
					 Sort(Dfr);
					 Print(Dfr);

					 std::cout << " Для повтора Нажмите 1: ";
					 if (_getch() == '1')
					 {
						 system("cls");
						 goto G_FLOATx2;
					 }

					 system("cls");
#endif // FLOATx2

 End();
 Blink();
////////////////////////
}