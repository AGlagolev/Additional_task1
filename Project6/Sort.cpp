#include "Sort.h"
#include "Exchange.h"
//ФУНКЦИЯ Sort
void Sort(int Arr[], const int n)
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
////////////////////////// 
void Sort(double Arr[], const int n)
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
//////////////////////////////////////////
void Sort(char Arr[], const int n)
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
//////////////////////////////////////////
void Sort(float Arr[], const int n)
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
//////////////////////////////////////////
void Sort(int Arr[ROWS][COLS])
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
//////////////////////////////////////////
void Sort(double Arr[ROWS][COLS])
{////Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = x; i < ROWS; i++)
			{
				//int j;
				//int j = (i == x) ? j = y + 1 : j = 0; //тернарный оператор
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
//////////////////////////////////////////
void Sort(char Arr[ROWS][COLS])
{////Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = x; i < ROWS; i++)
			{
				//int j;
				//(i == x) ? j = y + 1 : j = 0; //тернарный оператор
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
//////////////////////////////////////////
void Sort(float Arr[ROWS][COLS])
{////Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = x; i < ROWS; i++)
			{
				//int j;
				//(i == x) ? j = y + 1 : j = 0; //тернарный оператор
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
//
//