#include "Sort.h"
#include "Exchange.h"
#include "Exchange.cpp"

//РЕАЛИЗАЦИЯ ШАБЛОНОВ ФУНКЦИЙ Sort
// для одномерных масивов
template<typename T>
void Sort(T Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				Exchange(Arr[i], Arr[j]);				
			}
		}
	}
}
// для двумерных масивов
template<typename T>
void Sort(T Arr[ROWS][COLS])
{////Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = x; i < ROWS; i++)
			{
				//int j;
				 //(i == x) ? j = y + 1 : j = 0; //тернарный оператор, замена if /else
				for (int j = (i == x) ? j = y + 1 : j = 0; j < COLS; j++)
				{
					if (Arr[x][y] > Arr[i][j])
					{
						Exchange(Arr[x][y], Arr[i][j]);
					}
				}
			}
		}
	
	}
		
}