#include <iostream>
#include "FillRand.h"
#include "Print.h"
#include "Print.cpp" //При использовании шаблонов необходимо прописывать и .cpp
#include "Sort.h"
#include "Sort.cpp"
#include "Auxiliary.h"
#include "Sum.h"
#include "Sum.cpp"
#include "Avg.h"
#include "Avg.cpp"


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
#define DINAMICARR
/**********************************************************************************************/

void main()
{
	setlocale(LC_ALL, "Russian");
	/////////////////////////
#ifdef INTx1
	G_INTx1:
	const int n = 5;
	std::cout << "\t\tОдномерный масив типа int";
	W_line();
		
	int Arr[n];
	FillRand(Arr, n);
	Print(Arr, n);
	W_line();
	Sort(Arr, n);
	Print(Arr, n);
	std::cout << endl << "Cумма элементов массива = " << Sum(Arr, n) << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << Avg(Arr, n) << endl << endl;
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

	std::cout << "\t\tОдномерный масив типа double";
	W_line();
	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	W_line();
	Sort(Brr, m);
	Print(Brr, m);
	std::cout << endl << "Cумма элементов массива = " << Sum(Brr, m) << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << Avg(Brr, m) << endl << endl;
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
	std::cout << "\t\tОдномерный масив типа char";
	W_line();
	const int z = 10;	
	char Crr[z];
	FillRand(Crr, z);
	Print(Crr, z);
	W_line();
	Sort(Crr, z);
	Print(Crr, z);
	std::cout << endl << "Cумма элементов массива = " << Suma(Crr, z) << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << AvgC(Crr, z) << endl << endl;
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

	std::cout << "\t\tОдномерный масив типа float";	
	W_line();
	const int y = 10;
	float Frr[y];
	FillRand(Frr, y);
	Print(Frr, y);
	W_line();
	Sort(Frr, y);
	Print(Frr, y);
	std::cout << endl << "Cумма элементов массива = " << Sum(Frr, y) << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << Avg(Frr, y) << endl << endl;
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
	
	std::cout << "\t\tДвумерный масив типа int";
	W_line();
	int Drr[ROWS][COLS];
	FillRand(Drr);
	Print(Drr);
	W_line();
	Sort(Drr);
	Print(Drr);
	std::cout << endl << "Cумма элементов массива = " << Sum(Drr) << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << Avg(Drr) << endl << endl;
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

	std::cout << "\t\tДвумерный масив типа double";
	W_line();
	double Ddr[ROWS][COLS];
	FillRand(Ddr);
	Print(Ddr);
	W_line();
	Sort(Ddr);
	Print(Ddr);
	std::cout << endl << "Cумма элементов массива = " << Sum(Ddr) << endl << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << Avg(Ddr)<< endl << endl;
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
	
	std::cout << "\t\tДвумерный масив типа char";
	W_line();
	char Dcr[ROWS][COLS];
	FillRand(Dcr);
	Print(Dcr);
	W_line();
	Sort(Dcr);
	Print(Dcr);
	std::cout << endl << "Cумма элементов массива = " << Suma(Dcr) << endl << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << AvgC(Dcr) << endl << endl;
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
			  	
	std::cout << "\t\tДвумерный масив типа float";
	W_line();	
	float Dfr[ROWS][COLS];
	FillRand(Dfr);
	Print(Dfr);
	W_line();
	Sort(Dfr);
	Print(Dfr);
	std::cout << endl << "Cумма элементов массива = " << Sum(Dfr) << endl << endl;
	std::cout << endl << "Среднее арифметическое элементов массива = " << Avg(Dfr) << endl << endl;
	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto G_FLOATx2;
	}

	system("cls");
#endif // FLOATx2
	///////////////////////////
#ifdef DINAMICARR
	Din_INTx1:

	std::cout << "\t\tДинамический одномерный масив типа int";
	W_line();
	int num;
	std::cout << " Введите размер массива: ";
	std::cin >> num;
	int* Darr = new int[num];
	FillRand(Darr,num);
	
	for (int i = 0; i < num; i++)
	{
		std::cout << "\t Адрес = " << Darr + i << "| Значение = " << *(Darr + i) << std::endl;
	}
	delete[] Darr;
	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto Din_INTx1;
	}

	system("cls");

#endif // DINAMICARR


 End();
 Blink();
////////////////////////
}

