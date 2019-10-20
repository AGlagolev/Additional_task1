#include "Print.h"

////ФУНКЦИЯ Print
template<typename T>
void Print(T Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		std::cout << Arr[i] << "\t";
	}
	std::cout << std::endl;
}

//////////////////////////// 
//void Print(double Arr[], const int n)
//{
//	//Вывод массива на экран:
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << Arr[i] << "\t";
//	}
//	std::cout << std::endl;
//}
////////////////////////////////////////////
//void Print(char Arr[], const int n)
//{
//	//Вывод массива на экран:
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << Arr[i] << "\t";
//	}
//	std::cout << std::endl;
//}
////////////////////////////////////////////
//void Print(float Arr[], const int n)
//{
//	//Вывод массива на экран:
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << Arr[i] << "\t";
//	}
//	std::cout << std::endl;
//}
////////////////////////////////////////////
template<typename T>
void Print(T Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << Arr[i][j] << "\t";
		}
		std::cout <<std::endl;
	}


}
////////////////////////////////////////////
//void Print(double Arr[ROWS][COLS])
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			std::cout << Arr[i][j] << "\t";
//		}
//		std::cout << std::endl;
//	}
//
//}
////////////////////////////////////////////
//void Print(char Arr[ROWS][COLS])
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			std::cout << Arr[i][j] << "\t";
//		}
//		std::cout << std::endl;
//	}
//
//}
////////////////////////////////////////////
//void Print(float Arr[ROWS][COLS])
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			std::cout << Arr[i][j] << "\t";
//		}
//		std::cout << std::endl;
//	}
//
//}
////