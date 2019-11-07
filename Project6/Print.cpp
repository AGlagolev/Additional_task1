#include "Print.h"

////‘”Ќ ÷»я Print
template<typename T>
void Print(T Arr[], const int n)
{
	//¬ывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		std::cout << *(Arr + i) << "\t";
	}
	std::cout << std::endl;
}


template<typename T>
void Print(T Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{		
		for (int j = 0; j < COLS; j++)
		{

			std::cout << *(Arr[i] + j) << "\t";

		}
		std::cout << std::endl;
		/*if (i % COLS == 0)
		{
			std::cout << std::endl;
			std::cout << *(&Arr[0][0] + i) << "\t";
		}
		else

		{
			std::cout << *(&Arr[0][0] + i) << "\t";
		}*/
		
	}
	std::cout << std::endl;
}