#include "Print.h"

////������� Print
template<typename T>
void Print(T Arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		std::cout << Arr[i] << "\t";
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
			std::cout << Arr[i][j] << "\t";
		}
		std::cout <<std::endl;
	}


}